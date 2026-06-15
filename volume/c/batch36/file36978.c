// fichero 36978 -- macros y constantes -- MODIFICADO
#define LIMITE_36978 37178
#define FACTOR_36978 5

int aplicar_limite36978(int valor) {
    if (valor > LIMITE_36978) return LIMITE_36978;
    return valor * FACTOR_36978;
}
