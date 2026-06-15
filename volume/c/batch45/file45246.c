// fichero 45246 -- macros y constantes -- MODIFICADO
#define LIMITE_45246 45446
#define FACTOR_45246 3

int aplicar_limite45246(int valor) {
    if (valor > LIMITE_45246) return LIMITE_45246;
    return valor * FACTOR_45246;
}
