// fichero 52714 -- macros y constantes
#define LIMITE_52714 52814
#define FACTOR_52714 5

int aplicar_limite52714(int valor) {
    if (valor > LIMITE_52714) return LIMITE_52714;
    return valor * FACTOR_52714;
}
