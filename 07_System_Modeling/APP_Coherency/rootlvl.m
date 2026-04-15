t = linspace(0,10,101)';
u = linspace(0,1,101)';
plot(t,u,'b');
hold on
plot(out.logsout{1}.Values,'r');
xlabel('Time');
legend('Accelerator Pedal Position','Sensor Output Voltage');
