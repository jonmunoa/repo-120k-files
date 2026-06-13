// fichero 45814 -- macros y constantes
#define LIMITE_45814 45914
#define FACTOR_45814 5

int aplicar_limite45814(int valor) {
    if (valor > LIMITE_45814) return LIMITE_45814;
    return valor * FACTOR_45814;
}
