// fichero 49590 -- macros y constantes
#define LIMITE_49590 49690
#define FACTOR_49590 1

int aplicar_limite49590(int valor) {
    if (valor > LIMITE_49590) return LIMITE_49590;
    return valor * FACTOR_49590;
}
