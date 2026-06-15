// fichero 35574 -- macros y constantes -- MODIFICADO
#define LIMITE_35574 35774
#define FACTOR_35574 6

int aplicar_limite35574(int valor) {
    if (valor > LIMITE_35574) return LIMITE_35574;
    return valor * FACTOR_35574;
}
