// fichero 42014 -- macros y constantes -- MODIFICADO
#define LIMITE_42014 42214
#define FACTOR_42014 6

int aplicar_limite42014(int valor) {
    if (valor > LIMITE_42014) return LIMITE_42014;
    return valor * FACTOR_42014;
}
