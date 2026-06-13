// fichero 51590 -- macros y constantes
#define LIMITE_51590 51690
#define FACTOR_51590 1

int aplicar_limite51590(int valor) {
    if (valor > LIMITE_51590) return LIMITE_51590;
    return valor * FACTOR_51590;
}
