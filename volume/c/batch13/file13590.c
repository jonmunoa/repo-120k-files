// fichero 13590 -- macros y constantes
#define LIMITE_13590 13690
#define FACTOR_13590 1

int aplicar_limite13590(int valor) {
    if (valor > LIMITE_13590) return LIMITE_13590;
    return valor * FACTOR_13590;
}
