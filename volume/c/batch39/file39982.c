// fichero 39982 -- macros y constantes
#define LIMITE_39982 40082
#define FACTOR_39982 3

int aplicar_limite39982(int valor) {
    if (valor > LIMITE_39982) return LIMITE_39982;
    return valor * FACTOR_39982;
}
