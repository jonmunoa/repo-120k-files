// fichero 42762 -- macros y constantes
#define LIMITE_42762 42862
#define FACTOR_42762 3

int aplicar_limite42762(int valor) {
    if (valor > LIMITE_42762) return LIMITE_42762;
    return valor * FACTOR_42762;
}
