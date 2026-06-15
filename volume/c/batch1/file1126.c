// fichero 1126 -- macros y constantes -- MODIFICADO
#define LIMITE_1126 1326
#define FACTOR_1126 3

int aplicar_limite1126(int valor) {
    if (valor > LIMITE_1126) return LIMITE_1126;
    return valor * FACTOR_1126;
}
