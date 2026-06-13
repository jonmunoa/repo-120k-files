// fichero 16178 -- macros y constantes
#define LIMITE_16178 16278
#define FACTOR_16178 4

int aplicar_limite16178(int valor) {
    if (valor > LIMITE_16178) return LIMITE_16178;
    return valor * FACTOR_16178;
}
