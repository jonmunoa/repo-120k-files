// fichero 33426 -- macros y constantes
#define LIMITE_33426 33526
#define FACTOR_33426 2

int aplicar_limite33426(int valor) {
    if (valor > LIMITE_33426) return LIMITE_33426;
    return valor * FACTOR_33426;
}
