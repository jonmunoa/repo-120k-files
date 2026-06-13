// fichero 51006 -- macros y constantes
#define LIMITE_51006 51106
#define FACTOR_51006 2

int aplicar_limite51006(int valor) {
    if (valor > LIMITE_51006) return LIMITE_51006;
    return valor * FACTOR_51006;
}
