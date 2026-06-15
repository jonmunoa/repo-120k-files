// fichero 5362 -- macros y constantes -- MODIFICADO
#define LIMITE_5362 5562
#define FACTOR_5362 4

int aplicar_limite5362(int valor) {
    if (valor > LIMITE_5362) return LIMITE_5362;
    return valor * FACTOR_5362;
}
