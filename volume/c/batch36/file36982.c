// fichero 36982 -- macros y constantes
#define LIMITE_36982 37082
#define FACTOR_36982 3

int aplicar_limite36982(int valor) {
    if (valor > LIMITE_36982) return LIMITE_36982;
    return valor * FACTOR_36982;
}
