// fichero 5590 -- macros y constantes
#define LIMITE_5590 5690
#define FACTOR_5590 1

int aplicar_limite5590(int valor) {
    if (valor > LIMITE_5590) return LIMITE_5590;
    return valor * FACTOR_5590;
}
