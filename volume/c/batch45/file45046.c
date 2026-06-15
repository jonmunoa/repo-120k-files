// fichero 45046 -- macros y constantes -- MODIFICADO
#define LIMITE_45046 45246
#define FACTOR_45046 3

int aplicar_limite45046(int valor) {
    if (valor > LIMITE_45046) return LIMITE_45046;
    return valor * FACTOR_45046;
}
