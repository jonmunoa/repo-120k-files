// fichero 12362 -- macros y constantes
#define LIMITE_12362 12462
#define FACTOR_12362 3

int aplicar_limite12362(int valor) {
    if (valor > LIMITE_12362) return LIMITE_12362;
    return valor * FACTOR_12362;
}
