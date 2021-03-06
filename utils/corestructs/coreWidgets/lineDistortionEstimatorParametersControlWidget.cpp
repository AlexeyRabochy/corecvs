/**
 * \file lineDistortionEstimatorParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "lineDistortionEstimatorParametersControlWidget.h"
#include "ui_lineDistortionEstimatorParametersControlWidget.h"
#include "qSettingsGetter.h"
#include "qSettingsSetter.h"


LineDistortionEstimatorParametersControlWidget::LineDistortionEstimatorParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : ParametersControlWidgetBase(parent)
    , mUi(new Ui::LineDistortionEstimatorParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->costAlgorithmComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->iterationNumberSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->polinomDegreeSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->simpleJacobianCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->evenPowersOnlyCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->estimateTangentCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->estimateCenterCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
}

LineDistortionEstimatorParametersControlWidget::~LineDistortionEstimatorParametersControlWidget()
{

    delete mUi;
}

void LineDistortionEstimatorParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    LineDistortionEstimatorParameters *params = createParameters();
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
    delete params;
}

void LineDistortionEstimatorParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    LineDistortionEstimatorParameters *params = createParameters();
    saver.saveParameters(*params, rootPath);
    delete params;
}

 /* Composite fields are NOT supported so far */
void LineDistortionEstimatorParametersControlWidget::getParameters(LineDistortionEstimatorParameters& params) const
{

    params.setCostAlgorithm    (static_cast<LineDistortionEstimatorCost::LineDistortionEstimatorCost>(mUi->costAlgorithmComboBox->currentIndex()));
    params.setIterationNumber  (mUi->iterationNumberSpinBox->value());
    params.setPolinomDegree    (mUi->polinomDegreeSpinBox->value());
    params.setSimpleJacobian   (mUi->simpleJacobianCheckBox->isChecked());
    params.setEvenPowersOnly   (mUi->evenPowersOnlyCheckBox->isChecked());
    params.setEstimateTangent  (mUi->estimateTangentCheckBox->isChecked());
    params.setEstimateCenter   (mUi->estimateCenterCheckBox->isChecked());

}

LineDistortionEstimatorParameters *LineDistortionEstimatorParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    LineDistortionEstimatorParameters *result = new LineDistortionEstimatorParameters(
          static_cast<LineDistortionEstimatorCost::LineDistortionEstimatorCost>(mUi->costAlgorithmComboBox->currentIndex())
        , mUi->iterationNumberSpinBox->value()
        , mUi->polinomDegreeSpinBox->value()
        , mUi->simpleJacobianCheckBox->isChecked()
        , mUi->evenPowersOnlyCheckBox->isChecked()
        , mUi->estimateTangentCheckBox->isChecked()
        , mUi->estimateCenterCheckBox->isChecked()
    );
    return result;
}

void LineDistortionEstimatorParametersControlWidget::setParameters(const LineDistortionEstimatorParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->costAlgorithmComboBox->setCurrentIndex(input.costAlgorithm());
    mUi->iterationNumberSpinBox->setValue(input.iterationNumber());
    mUi->polinomDegreeSpinBox->setValue(input.polinomDegree());
    mUi->simpleJacobianCheckBox->setChecked(input.simpleJacobian());
    mUi->evenPowersOnlyCheckBox->setChecked(input.evenPowersOnly());
    mUi->estimateTangentCheckBox->setChecked(input.estimateTangent());
    mUi->estimateCenterCheckBox->setChecked(input.estimateCenter());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void LineDistortionEstimatorParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    LineDistortionEstimatorParameters *inputCasted = static_cast<LineDistortionEstimatorParameters *>(input);
    setParameters(*inputCasted);
}
