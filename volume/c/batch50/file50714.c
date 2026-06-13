// fichero 50714 -- macros y constantes
#define LIMITE_50714 50814
#define FACTOR_50714 5

int aplicar_limite50714(int valor) {
    if (valor > LIMITE_50714) return LIMITE_50714;
    return valor * FACTOR_50714;
}
