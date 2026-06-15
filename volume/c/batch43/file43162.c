// fichero 43162 -- macros y constantes -- MODIFICADO
#define LIMITE_43162 43362
#define FACTOR_43162 4

int aplicar_limite43162(int valor) {
    if (valor > LIMITE_43162) return LIMITE_43162;
    return valor * FACTOR_43162;
}
