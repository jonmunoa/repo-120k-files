// fichero 8314 -- macros y constantes
#define LIMITE_8314 8414
#define FACTOR_8314 5

int aplicar_limite8314(int valor) {
    if (valor > LIMITE_8314) return LIMITE_8314;
    return valor * FACTOR_8314;
}
