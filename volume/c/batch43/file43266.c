// fichero 43266 -- macros y constantes -- MODIFICADO
#define LIMITE_43266 43466
#define FACTOR_43266 3

int aplicar_limite43266(int valor) {
    if (valor > LIMITE_43266) return LIMITE_43266;
    return valor * FACTOR_43266;
}
