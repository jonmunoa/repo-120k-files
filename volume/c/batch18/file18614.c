// fichero 18614 -- macros y constantes -- MODIFICADO
#define LIMITE_18614 18814
#define FACTOR_18614 6

int aplicar_limite18614(int valor) {
    if (valor > LIMITE_18614) return LIMITE_18614;
    return valor * FACTOR_18614;
}
