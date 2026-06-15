// fichero 42446 -- macros y constantes -- MODIFICADO
#define LIMITE_42446 42646
#define FACTOR_42446 3

int aplicar_limite42446(int valor) {
    if (valor > LIMITE_42446) return LIMITE_42446;
    return valor * FACTOR_42446;
}
