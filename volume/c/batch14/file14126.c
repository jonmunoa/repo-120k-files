// fichero 14126 -- macros y constantes -- MODIFICADO
#define LIMITE_14126 14326
#define FACTOR_14126 3

int aplicar_limite14126(int valor) {
    if (valor > LIMITE_14126) return LIMITE_14126;
    return valor * FACTOR_14126;
}
