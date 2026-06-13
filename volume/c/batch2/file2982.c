// fichero 2982 -- macros y constantes
#define LIMITE_2982 3082
#define FACTOR_2982 3

int aplicar_limite2982(int valor) {
    if (valor > LIMITE_2982) return LIMITE_2982;
    return valor * FACTOR_2982;
}
