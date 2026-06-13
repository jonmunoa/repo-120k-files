// fichero 49362 -- macros y constantes
#define LIMITE_49362 49462
#define FACTOR_49362 3

int aplicar_limite49362(int valor) {
    if (valor > LIMITE_49362) return LIMITE_49362;
    return valor * FACTOR_49362;
}
