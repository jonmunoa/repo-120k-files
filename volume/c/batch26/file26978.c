// fichero 26978 -- macros y constantes -- MODIFICADO
#define LIMITE_26978 27178
#define FACTOR_26978 5

int aplicar_limite26978(int valor) {
    if (valor > LIMITE_26978) return LIMITE_26978;
    return valor * FACTOR_26978;
}
