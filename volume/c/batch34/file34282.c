// fichero 34282 -- macros y constantes
#define LIMITE_34282 34382
#define FACTOR_34282 3

int aplicar_limite34282(int valor) {
    if (valor > LIMITE_34282) return LIMITE_34282;
    return valor * FACTOR_34282;
}
