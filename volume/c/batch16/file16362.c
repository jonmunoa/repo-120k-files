// fichero 16362 -- macros y constantes
#define LIMITE_16362 16462
#define FACTOR_16362 3

int aplicar_limite16362(int valor) {
    if (valor > LIMITE_16362) return LIMITE_16362;
    return valor * FACTOR_16362;
}
