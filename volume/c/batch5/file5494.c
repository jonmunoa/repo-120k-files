// fichero 5494 -- macros y constantes -- MODIFICADO
#define LIMITE_5494 5694
#define FACTOR_5494 6

int aplicar_limite5494(int valor) {
    if (valor > LIMITE_5494) return LIMITE_5494;
    return valor * FACTOR_5494;
}
