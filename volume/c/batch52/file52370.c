// fichero 52370 -- macros y constantes
#define LIMITE_52370 52470
#define FACTOR_52370 1

int aplicar_limite52370(int valor) {
    if (valor > LIMITE_52370) return LIMITE_52370;
    return valor * FACTOR_52370;
}
