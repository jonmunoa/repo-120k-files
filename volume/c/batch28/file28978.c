// fichero 28978 -- macros y constantes -- MODIFICADO
#define LIMITE_28978 29178
#define FACTOR_28978 5

int aplicar_limite28978(int valor) {
    if (valor > LIMITE_28978) return LIMITE_28978;
    return valor * FACTOR_28978;
}
