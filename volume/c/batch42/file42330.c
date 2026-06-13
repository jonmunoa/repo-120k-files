// fichero 42330 -- macros y constantes
#define LIMITE_42330 42430
#define FACTOR_42330 1

int aplicar_limite42330(int valor) {
    if (valor > LIMITE_42330) return LIMITE_42330;
    return valor * FACTOR_42330;
}
