// fichero 15738 -- macros y constantes
#define LIMITE_15738 15838
#define FACTOR_15738 4

int aplicar_limite15738(int valor) {
    if (valor > LIMITE_15738) return LIMITE_15738;
    return valor * FACTOR_15738;
}
