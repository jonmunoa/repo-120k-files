// fichero 10814 -- macros y constantes
#define LIMITE_10814 10914
#define FACTOR_10814 5

int aplicar_limite10814(int valor) {
    if (valor > LIMITE_10814) return LIMITE_10814;
    return valor * FACTOR_10814;
}
