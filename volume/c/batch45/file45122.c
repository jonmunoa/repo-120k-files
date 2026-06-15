// fichero 45122 -- macros y constantes -- MODIFICADO
#define LIMITE_45122 45322
#define FACTOR_45122 4

int aplicar_limite45122(int valor) {
    if (valor > LIMITE_45122) return LIMITE_45122;
    return valor * FACTOR_45122;
}
