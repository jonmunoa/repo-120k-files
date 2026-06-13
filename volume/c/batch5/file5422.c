// fichero 5422 -- macros y constantes
#define LIMITE_5422 5522
#define FACTOR_5422 3

int aplicar_limite5422(int valor) {
    if (valor > LIMITE_5422) return LIMITE_5422;
    return valor * FACTOR_5422;
}
