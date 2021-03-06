/**
 * \file rectifyParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "rectifyParametersControlWidget.h"
#include "ui_rectifyParametersControlWidget.h"
#include "qSettingsGetter.h"
#include "qSettingsSetter.h"


RectifyParametersControlWidget::RectifyParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : ParametersControlWidgetBase(parent)
    , mUi(new Ui::RectifyParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->matchingMethodComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->hessianThresholdSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->octavesSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->octaveLayersSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->extendedCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->filterMinimumLengthSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->useKLTCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->computeEssentialCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->priorFocalSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->priorFocal2SpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->baselineLengthSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->fovAngleSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->estimationMethodComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->normaliseCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->ransacIterationsSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->ransacTestSizeSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->ransacThresholdSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->baselineXSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->baselineYSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->baselineZSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->iterativeMethodComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->iterativeIterationsSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->iterativeInitialSigmaSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->iterativeFactorSigmaSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualXSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualYSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualZSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualPitchSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualYawSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->manualRollSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->zdirXSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->zdirYSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->zdirZSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->autoZCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->autoShiftCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->preShiftSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->guessShiftThresholdSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
}

RectifyParametersControlWidget::~RectifyParametersControlWidget()
{

    delete mUi;
}

void RectifyParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    RectifyParameters *params = createParameters();
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
    delete params;
}

void RectifyParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    RectifyParameters *params = createParameters();
    saver.saveParameters(*params, rootPath);
    delete params;
}

 /* Composite fields are NOT supported so far */
void RectifyParametersControlWidget::getParameters(RectifyParameters& params) const
{

    params.setMatchingMethod   (static_cast<MatchingMethodType::MatchingMethodType>(mUi->matchingMethodComboBox->currentIndex()));
    params.setHessianThreshold (mUi->hessianThresholdSpinBox->value());
    params.setOctaves          (mUi->octavesSpinBox->value());
    params.setOctaveLayers     (mUi->octaveLayersSpinBox->value());
    params.setExtended         (mUi->extendedCheckBox->isChecked());
    params.setFilterMinimumLength(mUi->filterMinimumLengthSpinBox->value());
    params.setUseKLT           (mUi->useKLTCheckBox->isChecked());
    params.setComputeEssential (mUi->computeEssentialCheckBox->isChecked());
    params.setPriorFocal       (mUi->priorFocalSpinBox->value());
    params.setPriorFocal2      (mUi->priorFocal2SpinBox->value());
    params.setBaselineLength   (mUi->baselineLengthSpinBox->value());
    params.setFovAngle         (mUi->fovAngleSpinBox->value());
    params.setEstimationMethod (static_cast<EstimationMethodType::EstimationMethodType>(mUi->estimationMethodComboBox->currentIndex()));
    params.setNormalise        (mUi->normaliseCheckBox->isChecked());
    params.setRansacIterations (mUi->ransacIterationsSpinBox->value());
    params.setRansacTestSize   (mUi->ransacTestSizeSpinBox->value());
    params.setRansacThreshold  (mUi->ransacThresholdSpinBox->value());
    params.setBaselineX        (mUi->baselineXSpinBox->value());
    params.setBaselineY        (mUi->baselineYSpinBox->value());
    params.setBaselineZ        (mUi->baselineZSpinBox->value());
    params.setIterativeMethod  (static_cast<OptimizationMethodType::OptimizationMethodType>(mUi->iterativeMethodComboBox->currentIndex()));
    params.setIterativeIterations(mUi->iterativeIterationsSpinBox->value());
    params.setIterativeInitialSigma(mUi->iterativeInitialSigmaSpinBox->value());
    params.setIterativeFactorSigma(mUi->iterativeFactorSigmaSpinBox->value());
    params.setManualX          (mUi->manualXSpinBox->value());
    params.setManualY          (mUi->manualYSpinBox->value());
    params.setManualZ          (mUi->manualZSpinBox->value());
    params.setManualPitch      (mUi->manualPitchSpinBox->value());
    params.setManualYaw        (mUi->manualYawSpinBox->value());
    params.setManualRoll       (mUi->manualRollSpinBox->value());
    params.setZdirX            (mUi->zdirXSpinBox->value());
    params.setZdirY            (mUi->zdirYSpinBox->value());
    params.setZdirZ            (mUi->zdirZSpinBox->value());
    params.setAutoZ            (mUi->autoZCheckBox->isChecked());
    params.setAutoShift        (mUi->autoShiftCheckBox->isChecked());
    params.setPreShift         (mUi->preShiftSpinBox->value());
    params.setGuessShiftThreshold(mUi->guessShiftThresholdSpinBox->value());

}

RectifyParameters *RectifyParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    RectifyParameters *result = new RectifyParameters(
          static_cast<MatchingMethodType::MatchingMethodType>(mUi->matchingMethodComboBox->currentIndex())
        , mUi->hessianThresholdSpinBox->value()
        , mUi->octavesSpinBox->value()
        , mUi->octaveLayersSpinBox->value()
        , mUi->extendedCheckBox->isChecked()
        , mUi->filterMinimumLengthSpinBox->value()
        , mUi->useKLTCheckBox->isChecked()
        , mUi->computeEssentialCheckBox->isChecked()
        , mUi->priorFocalSpinBox->value()
        , mUi->priorFocal2SpinBox->value()
        , mUi->baselineLengthSpinBox->value()
        , mUi->fovAngleSpinBox->value()
        , static_cast<EstimationMethodType::EstimationMethodType>(mUi->estimationMethodComboBox->currentIndex())
        , mUi->normaliseCheckBox->isChecked()
        , mUi->ransacIterationsSpinBox->value()
        , mUi->ransacTestSizeSpinBox->value()
        , mUi->ransacThresholdSpinBox->value()
        , mUi->baselineXSpinBox->value()
        , mUi->baselineYSpinBox->value()
        , mUi->baselineZSpinBox->value()
        , static_cast<OptimizationMethodType::OptimizationMethodType>(mUi->iterativeMethodComboBox->currentIndex())
        , mUi->iterativeIterationsSpinBox->value()
        , mUi->iterativeInitialSigmaSpinBox->value()
        , mUi->iterativeFactorSigmaSpinBox->value()
        , mUi->manualXSpinBox->value()
        , mUi->manualYSpinBox->value()
        , mUi->manualZSpinBox->value()
        , mUi->manualPitchSpinBox->value()
        , mUi->manualYawSpinBox->value()
        , mUi->manualRollSpinBox->value()
        , mUi->zdirXSpinBox->value()
        , mUi->zdirYSpinBox->value()
        , mUi->zdirZSpinBox->value()
        , mUi->autoZCheckBox->isChecked()
        , mUi->autoShiftCheckBox->isChecked()
        , mUi->preShiftSpinBox->value()
        , mUi->guessShiftThresholdSpinBox->value()
    );
    return result;
}

void RectifyParametersControlWidget::setParameters(const RectifyParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->matchingMethodComboBox->setCurrentIndex(input.matchingMethod());
    mUi->hessianThresholdSpinBox->setValue(input.hessianThreshold());
    mUi->octavesSpinBox->setValue(input.octaves());
    mUi->octaveLayersSpinBox->setValue(input.octaveLayers());
    mUi->extendedCheckBox->setChecked(input.extended());
    mUi->filterMinimumLengthSpinBox->setValue(input.filterMinimumLength());
    mUi->useKLTCheckBox->setChecked(input.useKLT());
    mUi->computeEssentialCheckBox->setChecked(input.computeEssential());
    mUi->priorFocalSpinBox->setValue(input.priorFocal());
    mUi->priorFocal2SpinBox->setValue(input.priorFocal2());
    mUi->baselineLengthSpinBox->setValue(input.baselineLength());
    mUi->fovAngleSpinBox->setValue(input.fovAngle());
    mUi->estimationMethodComboBox->setCurrentIndex(input.estimationMethod());
    mUi->normaliseCheckBox->setChecked(input.normalise());
    mUi->ransacIterationsSpinBox->setValue(input.ransacIterations());
    mUi->ransacTestSizeSpinBox->setValue(input.ransacTestSize());
    mUi->ransacThresholdSpinBox->setValue(input.ransacThreshold());
    mUi->baselineXSpinBox->setValue(input.baselineX());
    mUi->baselineYSpinBox->setValue(input.baselineY());
    mUi->baselineZSpinBox->setValue(input.baselineZ());
    mUi->iterativeMethodComboBox->setCurrentIndex(input.iterativeMethod());
    mUi->iterativeIterationsSpinBox->setValue(input.iterativeIterations());
    mUi->iterativeInitialSigmaSpinBox->setValue(input.iterativeInitialSigma());
    mUi->iterativeFactorSigmaSpinBox->setValue(input.iterativeFactorSigma());
    mUi->manualXSpinBox->setValue(input.manualX());
    mUi->manualYSpinBox->setValue(input.manualY());
    mUi->manualZSpinBox->setValue(input.manualZ());
    mUi->manualPitchSpinBox->setValue(input.manualPitch());
    mUi->manualYawSpinBox->setValue(input.manualYaw());
    mUi->manualRollSpinBox->setValue(input.manualRoll());
    mUi->zdirXSpinBox->setValue(input.zdirX());
    mUi->zdirYSpinBox->setValue(input.zdirY());
    mUi->zdirZSpinBox->setValue(input.zdirZ());
    mUi->autoZCheckBox->setChecked(input.autoZ());
    mUi->autoShiftCheckBox->setChecked(input.autoShift());
    mUi->preShiftSpinBox->setValue(input.preShift());
    mUi->guessShiftThresholdSpinBox->setValue(input.guessShiftThreshold());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void RectifyParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    RectifyParameters *inputCasted = static_cast<RectifyParameters *>(input);
    setParameters(*inputCasted);
}
