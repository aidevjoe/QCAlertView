
Pod::Spec.new do |s|
  s.name         = "QCAlertView"
  s.version      = "0.0.4"
  s.summary      = "Alert View For iOS"
  s.homepage     = "https://github.com/Joe0708/QCAlertView"
  s.license      = "Copyright (c) 2016年 Joe. All rights reserved."
  s.author       = { "Joe" => "joesir7@foxmail.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/Joe0708/QCAlertView.git", :tag => s.version }
  s.source_files  = "Example/QCAlertView/*.*"
  s.requires_arc = true
end
