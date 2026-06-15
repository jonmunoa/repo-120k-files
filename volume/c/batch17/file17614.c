// fichero 17614 -- macros y constantes -- MODIFICADO
#define LIMITE_17614 17814
#define FACTOR_17614 6

int aplicar_limite17614(int valor) {
    if (valor > LIMITE_17614) return LIMITE_17614;
    return valor * FACTOR_17614;
}
