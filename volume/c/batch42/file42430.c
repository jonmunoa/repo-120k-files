// fichero 42430 -- macros y constantes
#define LIMITE_42430 42530
#define FACTOR_42430 1

int aplicar_limite42430(int valor) {
    if (valor > LIMITE_42430) return LIMITE_42430;
    return valor * FACTOR_42430;
}
