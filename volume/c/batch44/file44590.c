// fichero 44590 -- macros y constantes
#define LIMITE_44590 44690
#define FACTOR_44590 1

int aplicar_limite44590(int valor) {
    if (valor > LIMITE_44590) return LIMITE_44590;
    return valor * FACTOR_44590;
}
