// fichero 28982 -- macros y constantes
#define LIMITE_28982 29082
#define FACTOR_28982 3

int aplicar_limite28982(int valor) {
    if (valor > LIMITE_28982) return LIMITE_28982;
    return valor * FACTOR_28982;
}
