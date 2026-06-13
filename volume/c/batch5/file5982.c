// fichero 5982 -- macros y constantes
#define LIMITE_5982 6082
#define FACTOR_5982 3

int aplicar_limite5982(int valor) {
    if (valor > LIMITE_5982) return LIMITE_5982;
    return valor * FACTOR_5982;
}
