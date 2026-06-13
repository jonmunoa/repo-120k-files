// fichero 53590 -- macros y constantes
#define LIMITE_53590 53690
#define FACTOR_53590 1

int aplicar_limite53590(int valor) {
    if (valor > LIMITE_53590) return LIMITE_53590;
    return valor * FACTOR_53590;
}
