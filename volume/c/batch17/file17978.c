// fichero 17978 -- macros y constantes -- MODIFICADO
#define LIMITE_17978 18178
#define FACTOR_17978 5

int aplicar_limite17978(int valor) {
    if (valor > LIMITE_17978) return LIMITE_17978;
    return valor * FACTOR_17978;
}
