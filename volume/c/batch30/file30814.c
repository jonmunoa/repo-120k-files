// fichero 30814 -- macros y constantes
#define LIMITE_30814 30914
#define FACTOR_30814 5

int aplicar_limite30814(int valor) {
    if (valor > LIMITE_30814) return LIMITE_30814;
    return valor * FACTOR_30814;
}
