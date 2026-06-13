// fichero 12590 -- macros y constantes
#define LIMITE_12590 12690
#define FACTOR_12590 1

int aplicar_limite12590(int valor) {
    if (valor > LIMITE_12590) return LIMITE_12590;
    return valor * FACTOR_12590;
}
