// fichero 26390 -- macros y constantes
#define LIMITE_26390 26490
#define FACTOR_26390 1

int aplicar_limite26390(int valor) {
    if (valor > LIMITE_26390) return LIMITE_26390;
    return valor * FACTOR_26390;
}
