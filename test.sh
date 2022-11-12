ARG='"ruby -e "puts (-540 .. 539).to_a.shuffle.join(' ')"'
/push_swap $ARG | ./checker -v $ARG