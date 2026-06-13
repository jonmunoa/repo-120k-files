// fichero 35314 -- macros y constantes
#define LIMITE_35314 35414
#define FACTOR_35314 5

int aplicar_limite35314(int valor) {
    if (valor > LIMITE_35314) return LIMITE_35314;
    return valor * FACTOR_35314;
}
