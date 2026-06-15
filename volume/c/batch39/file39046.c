// fichero 39046 -- macros y constantes -- MODIFICADO
#define LIMITE_39046 39246
#define FACTOR_39046 3

int aplicar_limite39046(int valor) {
    if (valor > LIMITE_39046) return LIMITE_39046;
    return valor * FACTOR_39046;
}
