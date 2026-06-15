// fichero 5422 -- macros y constantes -- MODIFICADO
#define LIMITE_5422 5622
#define FACTOR_5422 4

int aplicar_limite5422(int valor) {
    if (valor > LIMITE_5422) return LIMITE_5422;
    return valor * FACTOR_5422;
}
