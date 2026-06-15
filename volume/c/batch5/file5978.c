// fichero 5978 -- macros y constantes -- MODIFICADO
#define LIMITE_5978 6178
#define FACTOR_5978 5

int aplicar_limite5978(int valor) {
    if (valor > LIMITE_5978) return LIMITE_5978;
    return valor * FACTOR_5978;
}
