// fichero 31102 -- macros y constantes
#define LIMITE_31102 31202
#define FACTOR_31102 3

int aplicar_limite31102(int valor) {
    if (valor > LIMITE_31102) return LIMITE_31102;
    return valor * FACTOR_31102;
}
