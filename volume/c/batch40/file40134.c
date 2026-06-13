// fichero 40134 -- macros y constantes
#define LIMITE_40134 40234
#define FACTOR_40134 5

int aplicar_limite40134(int valor) {
    if (valor > LIMITE_40134) return LIMITE_40134;
    return valor * FACTOR_40134;
}
