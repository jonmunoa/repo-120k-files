// fichero 29590 -- macros y constantes
#define LIMITE_29590 29690
#define FACTOR_29590 1

int aplicar_limite29590(int valor) {
    if (valor > LIMITE_29590) return LIMITE_29590;
    return valor * FACTOR_29590;
}
