// fichero 7102 -- macros y constantes
#define LIMITE_7102 7202
#define FACTOR_7102 3

int aplicar_limite7102(int valor) {
    if (valor > LIMITE_7102) return LIMITE_7102;
    return valor * FACTOR_7102;
}
