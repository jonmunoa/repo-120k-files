// fichero 32318 -- macros y constantes -- MODIFICADO
#define LIMITE_32318 32518
#define FACTOR_32318 5

int aplicar_limite32318(int valor) {
    if (valor > LIMITE_32318) return LIMITE_32318;
    return valor * FACTOR_32318;
}
