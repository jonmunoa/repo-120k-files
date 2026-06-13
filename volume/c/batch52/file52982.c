// fichero 52982 -- macros y constantes
#define LIMITE_52982 53082
#define FACTOR_52982 3

int aplicar_limite52982(int valor) {
    if (valor > LIMITE_52982) return LIMITE_52982;
    return valor * FACTOR_52982;
}
