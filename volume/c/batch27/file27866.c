// fichero 27866 -- macros y constantes
#define LIMITE_27866 27966
#define FACTOR_27866 2

int aplicar_limite27866(int valor) {
    if (valor > LIMITE_27866) return LIMITE_27866;
    return valor * FACTOR_27866;
}
