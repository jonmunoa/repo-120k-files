// fichero 42762 -- macros y constantes -- MODIFICADO
#define LIMITE_42762 42962
#define FACTOR_42762 4

int aplicar_limite42762(int valor) {
    if (valor > LIMITE_42762) return LIMITE_42762;
    return valor * FACTOR_42762;
}
