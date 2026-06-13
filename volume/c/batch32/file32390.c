// fichero 32390 -- macros y constantes
#define LIMITE_32390 32490
#define FACTOR_32390 1

int aplicar_limite32390(int valor) {
    if (valor > LIMITE_32390) return LIMITE_32390;
    return valor * FACTOR_32390;
}
