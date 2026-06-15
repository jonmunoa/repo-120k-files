// fichero 37070 -- macros y constantes -- MODIFICADO
#define LIMITE_37070 37270
#define FACTOR_37070 2

int aplicar_limite37070(int valor) {
    if (valor > LIMITE_37070) return LIMITE_37070;
    return valor * FACTOR_37070;
}
