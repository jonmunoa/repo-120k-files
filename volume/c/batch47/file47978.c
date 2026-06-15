// fichero 47978 -- macros y constantes -- MODIFICADO
#define LIMITE_47978 48178
#define FACTOR_47978 5

int aplicar_limite47978(int valor) {
    if (valor > LIMITE_47978) return LIMITE_47978;
    return valor * FACTOR_47978;
}
