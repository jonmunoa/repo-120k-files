// fichero 31446 -- macros y constantes
#define LIMITE_31446 31546
#define FACTOR_31446 2

int aplicar_limite31446(int valor) {
    if (valor > LIMITE_31446) return LIMITE_31446;
    return valor * FACTOR_31446;
}
