// fichero 45286 -- macros y constantes -- MODIFICADO
#define LIMITE_45286 45486
#define FACTOR_45286 3

int aplicar_limite45286(int valor) {
    if (valor > LIMITE_45286) return LIMITE_45286;
    return valor * FACTOR_45286;
}
