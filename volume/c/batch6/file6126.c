// fichero 6126 -- macros y constantes -- MODIFICADO
#define LIMITE_6126 6326
#define FACTOR_6126 3

int aplicar_limite6126(int valor) {
    if (valor > LIMITE_6126) return LIMITE_6126;
    return valor * FACTOR_6126;
}
