// fichero 45706 -- macros y constantes
#define LIMITE_45706 45806
#define FACTOR_45706 2

int aplicar_limite45706(int valor) {
    if (valor > LIMITE_45706) return LIMITE_45706;
    return valor * FACTOR_45706;
}
