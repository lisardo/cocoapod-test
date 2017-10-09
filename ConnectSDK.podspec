Pod::Spec.new do |s|
  s.name         = "ConnectSDK"
  s.version      = "1.6.2"
  s.summary      = "Connect Interactive SDK for iOS."

  s.description      = <<-DESC
This fantastic view changes its color gradually makes your app look fantastic!
                       DESC
  s.homepage     = "http://connectedinteractive.com"
  s.license    = { :type => "Apache License 2.0", :file => 'LICENSE' }
  s.author             = { "Lisardo" => "lisardo.kist@gmail.com" }
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.source       = { :http => "http://raw.githubusercontent.com/lisardo/cocoapod-test/master/ConnectSDK.zip" }
  s.ios.vendored_frameworks = 'ConnectSDK.framework'

end
