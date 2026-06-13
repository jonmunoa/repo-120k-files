// fichero 4706 -- macros y constantes
#define LIMITE_4706 4806
#define FACTOR_4706 2

int aplicar_limite4706(int valor) {
    if (valor > LIMITE_4706) return LIMITE_4706;
    return valor * FACTOR_4706;
}
