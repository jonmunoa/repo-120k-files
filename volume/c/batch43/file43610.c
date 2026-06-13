// fichero 43610 -- macros y constantes
#define LIMITE_43610 43710
#define FACTOR_43610 1

int aplicar_limite43610(int valor) {
    if (valor > LIMITE_43610) return LIMITE_43610;
    return valor * FACTOR_43610;
}
