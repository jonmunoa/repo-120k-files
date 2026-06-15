// fichero 4978 -- macros y constantes -- MODIFICADO
#define LIMITE_4978 5178
#define FACTOR_4978 5

int aplicar_limite4978(int valor) {
    if (valor > LIMITE_4978) return LIMITE_4978;
    return valor * FACTOR_4978;
}
