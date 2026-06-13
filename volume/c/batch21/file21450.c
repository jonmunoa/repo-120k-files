// fichero 21450 -- macros y constantes
#define LIMITE_21450 21550
#define FACTOR_21450 1

int aplicar_limite21450(int valor) {
    if (valor > LIMITE_21450) return LIMITE_21450;
    return valor * FACTOR_21450;
}
