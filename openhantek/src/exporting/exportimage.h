// SPDX-License-Identifier: GPL-2.0+

#pragma once
#include "exporterinterface.h"

class ExporterImage : public ExporterInterface {
    Q_DECLARE_TR_FUNCTIONS( LegacyExportDrawer )

  public:
    ExporterImage();
    void create( ExporterRegistry *newRegistry ) override;
    int faIcon() override;
    QString name() override;
    Type type() override;
    bool samples( const std::shared_ptr< PPresult > newData ) override;
    bool save() override;
    float progress() override;

  private:
    std::shared_ptr< PPresult > data;
};
