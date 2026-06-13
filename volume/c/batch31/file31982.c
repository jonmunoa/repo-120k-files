// fichero 31982 -- macros y constantes
#define LIMITE_31982 32082
#define FACTOR_31982 3

int aplicar_limite31982(int valor) {
    if (valor > LIMITE_31982) return LIMITE_31982;
    return valor * FACTOR_31982;
}
