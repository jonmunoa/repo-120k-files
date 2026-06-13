// fichero 45818 -- macros y constantes
#define LIMITE_45818 45918
#define FACTOR_45818 4

int aplicar_limite45818(int valor) {
    if (valor > LIMITE_45818) return LIMITE_45818;
    return valor * FACTOR_45818;
}
