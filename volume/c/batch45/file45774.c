// fichero 45774 -- macros y constantes
#define LIMITE_45774 45874
#define FACTOR_45774 5

int aplicar_limite45774(int valor) {
    if (valor > LIMITE_45774) return LIMITE_45774;
    return valor * FACTOR_45774;
}
