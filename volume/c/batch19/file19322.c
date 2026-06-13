// fichero 19322 -- macros y constantes
#define LIMITE_19322 19422
#define FACTOR_19322 3

int aplicar_limite19322(int valor) {
    if (valor > LIMITE_19322) return LIMITE_19322;
    return valor * FACTOR_19322;
}
