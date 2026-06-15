// fichero 12126 -- macros y constantes -- MODIFICADO
#define LIMITE_12126 12326
#define FACTOR_12126 3

int aplicar_limite12126(int valor) {
    if (valor > LIMITE_12126) return LIMITE_12126;
    return valor * FACTOR_12126;
}
