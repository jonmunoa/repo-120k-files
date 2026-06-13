// fichero 54966 -- macros y constantes
#define LIMITE_54966 55066
#define FACTOR_54966 2

int aplicar_limite54966(int valor) {
    if (valor > LIMITE_54966) return LIMITE_54966;
    return valor * FACTOR_54966;
}
