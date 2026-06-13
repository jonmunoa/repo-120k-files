// fichero 41590 -- macros y constantes
#define LIMITE_41590 41690
#define FACTOR_41590 1

int aplicar_limite41590(int valor) {
    if (valor > LIMITE_41590) return LIMITE_41590;
    return valor * FACTOR_41590;
}
