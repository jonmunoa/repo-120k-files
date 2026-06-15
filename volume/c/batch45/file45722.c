// fichero 45722 -- macros y constantes -- MODIFICADO
#define LIMITE_45722 45922
#define FACTOR_45722 4

int aplicar_limite45722(int valor) {
    if (valor > LIMITE_45722) return LIMITE_45722;
    return valor * FACTOR_45722;
}
