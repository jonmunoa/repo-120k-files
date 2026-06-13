// fichero 27390 -- macros y constantes
#define LIMITE_27390 27490
#define FACTOR_27390 1

int aplicar_limite27390(int valor) {
    if (valor > LIMITE_27390) return LIMITE_27390;
    return valor * FACTOR_27390;
}
