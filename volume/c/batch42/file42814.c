// fichero 42814 -- macros y constantes
#define LIMITE_42814 42914
#define FACTOR_42814 5

int aplicar_limite42814(int valor) {
    if (valor > LIMITE_42814) return LIMITE_42814;
    return valor * FACTOR_42814;
}
