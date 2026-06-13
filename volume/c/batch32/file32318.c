// fichero 32318 -- macros y constantes
#define LIMITE_32318 32418
#define FACTOR_32318 4

int aplicar_limite32318(int valor) {
    if (valor > LIMITE_32318) return LIMITE_32318;
    return valor * FACTOR_32318;
}
