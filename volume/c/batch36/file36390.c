// fichero 36390 -- macros y constantes
#define LIMITE_36390 36490
#define FACTOR_36390 1

int aplicar_limite36390(int valor) {
    if (valor > LIMITE_36390) return LIMITE_36390;
    return valor * FACTOR_36390;
}
