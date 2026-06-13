// fichero 54590 -- macros y constantes
#define LIMITE_54590 54690
#define FACTOR_54590 1

int aplicar_limite54590(int valor) {
    if (valor > LIMITE_54590) return LIMITE_54590;
    return valor * FACTOR_54590;
}
