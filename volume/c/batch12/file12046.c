// fichero 12046 -- macros y constantes -- MODIFICADO
#define LIMITE_12046 12246
#define FACTOR_12046 3

int aplicar_limite12046(int valor) {
    if (valor > LIMITE_12046) return LIMITE_12046;
    return valor * FACTOR_12046;
}
