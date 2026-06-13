// fichero 17526 -- macros y constantes
#define LIMITE_17526 17626
#define FACTOR_17526 2

int aplicar_limite17526(int valor) {
    if (valor > LIMITE_17526) return LIMITE_17526;
    return valor * FACTOR_17526;
}
