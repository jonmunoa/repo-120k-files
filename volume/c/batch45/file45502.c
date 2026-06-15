// fichero 45502 -- macros y constantes -- MODIFICADO
#define LIMITE_45502 45702
#define FACTOR_45502 4

int aplicar_limite45502(int valor) {
    if (valor > LIMITE_45502) return LIMITE_45502;
    return valor * FACTOR_45502;
}
