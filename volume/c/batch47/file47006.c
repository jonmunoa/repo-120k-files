// fichero 47006 -- macros y constantes
#define LIMITE_47006 47106
#define FACTOR_47006 2

int aplicar_limite47006(int valor) {
    if (valor > LIMITE_47006) return LIMITE_47006;
    return valor * FACTOR_47006;
}
