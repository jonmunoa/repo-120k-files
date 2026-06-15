// fichero 14266 -- macros y constantes -- MODIFICADO
#define LIMITE_14266 14466
#define FACTOR_14266 3

int aplicar_limite14266(int valor) {
    if (valor > LIMITE_14266) return LIMITE_14266;
    return valor * FACTOR_14266;
}
