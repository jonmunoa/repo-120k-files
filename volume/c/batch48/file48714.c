// fichero 48714 -- macros y constantes
#define LIMITE_48714 48814
#define FACTOR_48714 5

int aplicar_limite48714(int valor) {
    if (valor > LIMITE_48714) return LIMITE_48714;
    return valor * FACTOR_48714;
}
