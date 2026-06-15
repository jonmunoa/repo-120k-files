// fichero 45818 -- macros y constantes -- MODIFICADO
#define LIMITE_45818 46018
#define FACTOR_45818 5

int aplicar_limite45818(int valor) {
    if (valor > LIMITE_45818) return LIMITE_45818;
    return valor * FACTOR_45818;
}
