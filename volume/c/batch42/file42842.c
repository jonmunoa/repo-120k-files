// fichero 42842 -- macros y constantes
#define LIMITE_42842 42942
#define FACTOR_42842 3

int aplicar_limite42842(int valor) {
    if (valor > LIMITE_42842) return LIMITE_42842;
    return valor * FACTOR_42842;
}
