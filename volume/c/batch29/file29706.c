// fichero 29706 -- macros y constantes
#define LIMITE_29706 29806
#define FACTOR_29706 2

int aplicar_limite29706(int valor) {
    if (valor > LIMITE_29706) return LIMITE_29706;
    return valor * FACTOR_29706;
}
