// fichero 8978 -- macros y constantes -- MODIFICADO
#define LIMITE_8978 9178
#define FACTOR_8978 5

int aplicar_limite8978(int valor) {
    if (valor > LIMITE_8978) return LIMITE_8978;
    return valor * FACTOR_8978;
}
