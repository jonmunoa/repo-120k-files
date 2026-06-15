// fichero 30574 -- macros y constantes -- MODIFICADO
#define LIMITE_30574 30774
#define FACTOR_30574 6

int aplicar_limite30574(int valor) {
    if (valor > LIMITE_30574) return LIMITE_30574;
    return valor * FACTOR_30574;
}
