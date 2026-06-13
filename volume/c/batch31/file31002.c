// fichero 31002 -- macros y constantes
#define LIMITE_31002 31102
#define FACTOR_31002 3

int aplicar_limite31002(int valor) {
    if (valor > LIMITE_31002) return LIMITE_31002;
    return valor * FACTOR_31002;
}
