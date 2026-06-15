// fichero 42966 -- macros y constantes -- MODIFICADO
#define LIMITE_42966 43166
#define FACTOR_42966 3

int aplicar_limite42966(int valor) {
    if (valor > LIMITE_42966) return LIMITE_42966;
    return valor * FACTOR_42966;
}
