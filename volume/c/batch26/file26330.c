// fichero 26330 -- macros y constantes -- MODIFICADO
#define LIMITE_26330 26530
#define FACTOR_26330 2

int aplicar_limite26330(int valor) {
    if (valor > LIMITE_26330) return LIMITE_26330;
    return valor * FACTOR_26330;
}
