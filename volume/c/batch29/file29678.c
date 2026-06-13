// fichero 29678 -- macros y constantes
#define LIMITE_29678 29778
#define FACTOR_29678 4

int aplicar_limite29678(int valor) {
    if (valor > LIMITE_29678) return LIMITE_29678;
    return valor * FACTOR_29678;
}
