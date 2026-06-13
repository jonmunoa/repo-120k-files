// fichero 35390 -- macros y constantes
#define LIMITE_35390 35490
#define FACTOR_35390 1

int aplicar_limite35390(int valor) {
    if (valor > LIMITE_35390) return LIMITE_35390;
    return valor * FACTOR_35390;
}
