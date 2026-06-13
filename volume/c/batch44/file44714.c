// fichero 44714 -- macros y constantes
#define LIMITE_44714 44814
#define FACTOR_44714 5

int aplicar_limite44714(int valor) {
    if (valor > LIMITE_44714) return LIMITE_44714;
    return valor * FACTOR_44714;
}
