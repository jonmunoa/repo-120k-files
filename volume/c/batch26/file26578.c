// fichero 26578 -- macros y constantes -- MODIFICADO
#define LIMITE_26578 26778
#define FACTOR_26578 5

int aplicar_limite26578(int valor) {
    if (valor > LIMITE_26578) return LIMITE_26578;
    return valor * FACTOR_26578;
}
