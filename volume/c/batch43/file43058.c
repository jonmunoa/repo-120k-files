// fichero 43058 -- macros y constantes
#define LIMITE_43058 43158
#define FACTOR_43058 4

int aplicar_limite43058(int valor) {
    if (valor > LIMITE_43058) return LIMITE_43058;
    return valor * FACTOR_43058;
}
