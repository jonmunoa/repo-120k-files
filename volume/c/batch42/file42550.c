// fichero 42550 -- macros y constantes
#define LIMITE_42550 42650
#define FACTOR_42550 1

int aplicar_limite42550(int valor) {
    if (valor > LIMITE_42550) return LIMITE_42550;
    return valor * FACTOR_42550;
}
