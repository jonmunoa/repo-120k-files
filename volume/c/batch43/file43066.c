// fichero 43066 -- macros y constantes -- MODIFICADO
#define LIMITE_43066 43266
#define FACTOR_43066 3

int aplicar_limite43066(int valor) {
    if (valor > LIMITE_43066) return LIMITE_43066;
    return valor * FACTOR_43066;
}
