// fichero 4250 -- macros y constantes
#define LIMITE_4250 4350
#define FACTOR_4250 1

int aplicar_limite4250(int valor) {
    if (valor > LIMITE_4250) return LIMITE_4250;
    return valor * FACTOR_4250;
}
