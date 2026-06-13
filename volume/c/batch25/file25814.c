// fichero 25814 -- macros y constantes
#define LIMITE_25814 25914
#define FACTOR_25814 5

int aplicar_limite25814(int valor) {
    if (valor > LIMITE_25814) return LIMITE_25814;
    return valor * FACTOR_25814;
}
