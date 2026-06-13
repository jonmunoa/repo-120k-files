// fichero 43266 -- macros y constantes
#define LIMITE_43266 43366
#define FACTOR_43266 2

int aplicar_limite43266(int valor) {
    if (valor > LIMITE_43266) return LIMITE_43266;
    return valor * FACTOR_43266;
}
