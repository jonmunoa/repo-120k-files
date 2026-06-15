// fichero 36126 -- macros y constantes -- MODIFICADO
#define LIMITE_36126 36326
#define FACTOR_36126 3

int aplicar_limite36126(int valor) {
    if (valor > LIMITE_36126) return LIMITE_36126;
    return valor * FACTOR_36126;
}
