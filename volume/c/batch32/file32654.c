// fichero 32654 -- macros y constantes
#define LIMITE_32654 32754
#define FACTOR_32654 5

int aplicar_limite32654(int valor) {
    if (valor > LIMITE_32654) return LIMITE_32654;
    return valor * FACTOR_32654;
}
