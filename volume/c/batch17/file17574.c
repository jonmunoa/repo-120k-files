// fichero 17574 -- macros y constantes -- MODIFICADO
#define LIMITE_17574 17774
#define FACTOR_17574 6

int aplicar_limite17574(int valor) {
    if (valor > LIMITE_17574) return LIMITE_17574;
    return valor * FACTOR_17574;
}
