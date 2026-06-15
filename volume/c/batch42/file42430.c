// fichero 42430 -- macros y constantes -- MODIFICADO
#define LIMITE_42430 42630
#define FACTOR_42430 2

int aplicar_limite42430(int valor) {
    if (valor > LIMITE_42430) return LIMITE_42430;
    return valor * FACTOR_42430;
}
