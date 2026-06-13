// fichero 43066 -- macros y constantes
#define LIMITE_43066 43166
#define FACTOR_43066 2

int aplicar_limite43066(int valor) {
    if (valor > LIMITE_43066) return LIMITE_43066;
    return valor * FACTOR_43066;
}
