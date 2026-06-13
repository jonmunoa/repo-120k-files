// fichero 20814 -- macros y constantes
#define LIMITE_20814 20914
#define FACTOR_20814 5

int aplicar_limite20814(int valor) {
    if (valor > LIMITE_20814) return LIMITE_20814;
    return valor * FACTOR_20814;
}
