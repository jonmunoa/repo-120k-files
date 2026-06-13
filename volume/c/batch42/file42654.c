// fichero 42654 -- macros y constantes
#define LIMITE_42654 42754
#define FACTOR_42654 5

int aplicar_limite42654(int valor) {
    if (valor > LIMITE_42654) return LIMITE_42654;
    return valor * FACTOR_42654;
}
