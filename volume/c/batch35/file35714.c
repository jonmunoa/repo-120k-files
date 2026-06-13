// fichero 35714 -- macros y constantes
#define LIMITE_35714 35814
#define FACTOR_35714 5

int aplicar_limite35714(int valor) {
    if (valor > LIMITE_35714) return LIMITE_35714;
    return valor * FACTOR_35714;
}
