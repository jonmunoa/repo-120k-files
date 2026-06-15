// fichero 42550 -- macros y constantes -- MODIFICADO
#define LIMITE_42550 42750
#define FACTOR_42550 2

int aplicar_limite42550(int valor) {
    if (valor > LIMITE_42550) return LIMITE_42550;
    return valor * FACTOR_42550;
}
