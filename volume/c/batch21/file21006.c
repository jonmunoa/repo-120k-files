// fichero 21006 -- macros y constantes
#define LIMITE_21006 21106
#define FACTOR_21006 2

int aplicar_limite21006(int valor) {
    if (valor > LIMITE_21006) return LIMITE_21006;
    return valor * FACTOR_21006;
}
