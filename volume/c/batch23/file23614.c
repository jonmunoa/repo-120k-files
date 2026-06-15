// fichero 23614 -- macros y constantes -- MODIFICADO
#define LIMITE_23614 23814
#define FACTOR_23614 6

int aplicar_limite23614(int valor) {
    if (valor > LIMITE_23614) return LIMITE_23614;
    return valor * FACTOR_23614;
}
