// fichero 40390 -- macros y constantes
#define LIMITE_40390 40490
#define FACTOR_40390 1

int aplicar_limite40390(int valor) {
    if (valor > LIMITE_40390) return LIMITE_40390;
    return valor * FACTOR_40390;
}
