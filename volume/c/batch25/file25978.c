// fichero 25978 -- macros y constantes -- MODIFICADO
#define LIMITE_25978 26178
#define FACTOR_25978 5

int aplicar_limite25978(int valor) {
    if (valor > LIMITE_25978) return LIMITE_25978;
    return valor * FACTOR_25978;
}
