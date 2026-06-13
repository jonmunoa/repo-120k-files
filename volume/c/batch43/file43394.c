// fichero 43394 -- macros y constantes
#define LIMITE_43394 43494
#define FACTOR_43394 5

int aplicar_limite43394(int valor) {
    if (valor > LIMITE_43394) return LIMITE_43394;
    return valor * FACTOR_43394;
}
