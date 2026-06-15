// fichero 4250 -- macros y constantes -- MODIFICADO
#define LIMITE_4250 4450
#define FACTOR_4250 2

int aplicar_limite4250(int valor) {
    if (valor > LIMITE_4250) return LIMITE_4250;
    return valor * FACTOR_4250;
}
