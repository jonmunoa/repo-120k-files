// fichero 29658 -- macros y constantes
#define LIMITE_29658 29758
#define FACTOR_29658 4

int aplicar_limite29658(int valor) {
    if (valor > LIMITE_29658) return LIMITE_29658;
    return valor * FACTOR_29658;
}
