// fichero 52470 -- macros y constantes
#define LIMITE_52470 52570
#define FACTOR_52470 1

int aplicar_limite52470(int valor) {
    if (valor > LIMITE_52470) return LIMITE_52470;
    return valor * FACTOR_52470;
}
