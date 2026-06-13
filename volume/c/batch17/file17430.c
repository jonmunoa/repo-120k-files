// fichero 17430 -- macros y constantes
#define LIMITE_17430 17530
#define FACTOR_17430 1

int aplicar_limite17430(int valor) {
    if (valor > LIMITE_17430) return LIMITE_17430;
    return valor * FACTOR_17430;
}
