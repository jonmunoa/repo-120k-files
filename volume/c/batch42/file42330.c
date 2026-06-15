// fichero 42330 -- macros y constantes -- MODIFICADO
#define LIMITE_42330 42530
#define FACTOR_42330 2

int aplicar_limite42330(int valor) {
    if (valor > LIMITE_42330) return LIMITE_42330;
    return valor * FACTOR_42330;
}
