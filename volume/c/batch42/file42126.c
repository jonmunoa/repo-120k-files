// fichero 42126 -- macros y constantes -- MODIFICADO
#define LIMITE_42126 42326
#define FACTOR_42126 3

int aplicar_limite42126(int valor) {
    if (valor > LIMITE_42126) return LIMITE_42126;
    return valor * FACTOR_42126;
}
