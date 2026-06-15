// fichero 26074 -- macros y constantes -- MODIFICADO
#define LIMITE_26074 26274
#define FACTOR_26074 6

int aplicar_limite26074(int valor) {
    if (valor > LIMITE_26074) return LIMITE_26074;
    return valor * FACTOR_26074;
}
