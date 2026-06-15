// fichero 8626 -- macros y constantes -- MODIFICADO
#define LIMITE_8626 8826
#define FACTOR_8626 3

int aplicar_limite8626(int valor) {
    if (valor > LIMITE_8626) return LIMITE_8626;
    return valor * FACTOR_8626;
}
