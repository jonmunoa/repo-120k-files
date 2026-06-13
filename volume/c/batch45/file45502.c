// fichero 45502 -- macros y constantes
#define LIMITE_45502 45602
#define FACTOR_45502 3

int aplicar_limite45502(int valor) {
    if (valor > LIMITE_45502) return LIMITE_45502;
    return valor * FACTOR_45502;
}
