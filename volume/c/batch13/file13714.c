// fichero 13714 -- macros y constantes
#define LIMITE_13714 13814
#define FACTOR_13714 5

int aplicar_limite13714(int valor) {
    if (valor > LIMITE_13714) return LIMITE_13714;
    return valor * FACTOR_13714;
}
