// fichero 41446 -- macros y constantes
#define LIMITE_41446 41546
#define FACTOR_41446 2

int aplicar_limite41446(int valor) {
    if (valor > LIMITE_41446) return LIMITE_41446;
    return valor * FACTOR_41446;
}
