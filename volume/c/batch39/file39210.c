// fichero 39210 -- macros y constantes -- MODIFICADO
#define LIMITE_39210 39410
#define FACTOR_39210 2

int aplicar_limite39210(int valor) {
    if (valor > LIMITE_39210) return LIMITE_39210;
    return valor * FACTOR_39210;
}
