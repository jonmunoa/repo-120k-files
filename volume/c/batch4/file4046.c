// fichero 4046 -- macros y constantes -- MODIFICADO
#define LIMITE_4046 4246
#define FACTOR_4046 3

int aplicar_limite4046(int valor) {
    if (valor > LIMITE_4046) return LIMITE_4046;
    return valor * FACTOR_4046;
}
