// fichero 8538 -- macros y constantes -- MODIFICADO
#define LIMITE_8538 8738
#define FACTOR_8538 5

int aplicar_limite8538(int valor) {
    if (valor > LIMITE_8538) return LIMITE_8538;
    return valor * FACTOR_8538;
}
