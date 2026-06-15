// fichero 48126 -- macros y constantes -- MODIFICADO
#define LIMITE_48126 48326
#define FACTOR_48126 3

int aplicar_limite48126(int valor) {
    if (valor > LIMITE_48126) return LIMITE_48126;
    return valor * FACTOR_48126;
}
