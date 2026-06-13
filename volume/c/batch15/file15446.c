// fichero 15446 -- macros y constantes
#define LIMITE_15446 15546
#define FACTOR_15446 2

int aplicar_limite15446(int valor) {
    if (valor > LIMITE_15446) return LIMITE_15446;
    return valor * FACTOR_15446;
}
