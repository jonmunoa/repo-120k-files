// fichero 31814 -- macros y constantes
#define LIMITE_31814 31914
#define FACTOR_31814 5

int aplicar_limite31814(int valor) {
    if (valor > LIMITE_31814) return LIMITE_31814;
    return valor * FACTOR_31814;
}
