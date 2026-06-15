// fichero 45094 -- macros y constantes -- MODIFICADO
#define LIMITE_45094 45294
#define FACTOR_45094 6

int aplicar_limite45094(int valor) {
    if (valor > LIMITE_45094) return LIMITE_45094;
    return valor * FACTOR_45094;
}
