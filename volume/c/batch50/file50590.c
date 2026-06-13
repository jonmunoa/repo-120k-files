// fichero 50590 -- macros y constantes
#define LIMITE_50590 50690
#define FACTOR_50590 1

int aplicar_limite50590(int valor) {
    if (valor > LIMITE_50590) return LIMITE_50590;
    return valor * FACTOR_50590;
}
