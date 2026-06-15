// fichero 26222 -- macros y constantes -- MODIFICADO
#define LIMITE_26222 26422
#define FACTOR_26222 4

int aplicar_limite26222(int valor) {
    if (valor > LIMITE_26222) return LIMITE_26222;
    return valor * FACTOR_26222;
}
