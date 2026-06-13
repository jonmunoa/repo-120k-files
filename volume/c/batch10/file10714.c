// fichero 10714 -- macros y constantes
#define LIMITE_10714 10814
#define FACTOR_10714 5

int aplicar_limite10714(int valor) {
    if (valor > LIMITE_10714) return LIMITE_10714;
    return valor * FACTOR_10714;
}
