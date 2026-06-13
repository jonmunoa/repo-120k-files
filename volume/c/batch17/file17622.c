// fichero 17622 -- macros y constantes
#define LIMITE_17622 17722
#define FACTOR_17622 3

int aplicar_limite17622(int valor) {
    if (valor > LIMITE_17622) return LIMITE_17622;
    return valor * FACTOR_17622;
}
