// fichero 12730 -- macros y constantes
#define LIMITE_12730 12830
#define FACTOR_12730 1

int aplicar_limite12730(int valor) {
    if (valor > LIMITE_12730) return LIMITE_12730;
    return valor * FACTOR_12730;
}
