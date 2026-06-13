// fichero 33526 -- macros y constantes
#define LIMITE_33526 33626
#define FACTOR_33526 2

int aplicar_limite33526(int valor) {
    if (valor > LIMITE_33526) return LIMITE_33526;
    return valor * FACTOR_33526;
}
