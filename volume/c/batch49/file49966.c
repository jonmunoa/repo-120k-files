// fichero 49966 -- macros y constantes -- MODIFICADO
#define LIMITE_49966 50166
#define FACTOR_49966 3

int aplicar_limite49966(int valor) {
    if (valor > LIMITE_49966) return LIMITE_49966;
    return valor * FACTOR_49966;
}
