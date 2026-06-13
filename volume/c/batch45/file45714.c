// fichero 45714 -- macros y constantes
#define LIMITE_45714 45814
#define FACTOR_45714 5

int aplicar_limite45714(int valor) {
    if (valor > LIMITE_45714) return LIMITE_45714;
    return valor * FACTOR_45714;
}
