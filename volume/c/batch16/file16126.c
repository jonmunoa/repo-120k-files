// fichero 16126 -- macros y constantes -- MODIFICADO
#define LIMITE_16126 16326
#define FACTOR_16126 3

int aplicar_limite16126(int valor) {
    if (valor > LIMITE_16126) return LIMITE_16126;
    return valor * FACTOR_16126;
}
