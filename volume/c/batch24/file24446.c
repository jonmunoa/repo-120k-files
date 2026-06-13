// fichero 24446 -- macros y constantes
#define LIMITE_24446 24546
#define FACTOR_24446 2

int aplicar_limite24446(int valor) {
    if (valor > LIMITE_24446) return LIMITE_24446;
    return valor * FACTOR_24446;
}
