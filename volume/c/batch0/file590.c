// fichero 590 -- macros y constantes
#define LIMITE_590 690
#define FACTOR_590 1

int aplicar_limite590(int valor) {
    if (valor > LIMITE_590) return LIMITE_590;
    return valor * FACTOR_590;
}
