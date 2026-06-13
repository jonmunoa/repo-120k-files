// fichero 21814 -- macros y constantes
#define LIMITE_21814 21914
#define FACTOR_21814 5

int aplicar_limite21814(int valor) {
    if (valor > LIMITE_21814) return LIMITE_21814;
    return valor * FACTOR_21814;
}
