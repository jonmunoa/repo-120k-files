// fichero 45450 -- macros y constantes -- MODIFICADO
#define LIMITE_45450 45650
#define FACTOR_45450 2

int aplicar_limite45450(int valor) {
    if (valor > LIMITE_45450) return LIMITE_45450;
    return valor * FACTOR_45450;
}
