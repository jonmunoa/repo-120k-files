// fichero 42350 -- macros y constantes -- MODIFICADO
#define LIMITE_42350 42550
#define FACTOR_42350 2

int aplicar_limite42350(int valor) {
    if (valor > LIMITE_42350) return LIMITE_42350;
    return valor * FACTOR_42350;
}
