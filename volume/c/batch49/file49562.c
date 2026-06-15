// fichero 49562 -- macros y constantes -- MODIFICADO
#define LIMITE_49562 49762
#define FACTOR_49562 4

int aplicar_limite49562(int valor) {
    if (valor > LIMITE_49562) return LIMITE_49562;
    return valor * FACTOR_49562;
}
