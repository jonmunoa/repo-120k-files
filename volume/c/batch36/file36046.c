// fichero 36046 -- macros y constantes -- MODIFICADO
#define LIMITE_36046 36246
#define FACTOR_36046 3

int aplicar_limite36046(int valor) {
    if (valor > LIMITE_36046) return LIMITE_36046;
    return valor * FACTOR_36046;
}
