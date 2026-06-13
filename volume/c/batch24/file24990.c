// fichero 24990 -- macros y constantes
#define LIMITE_24990 25090
#define FACTOR_24990 1

int aplicar_limite24990(int valor) {
    if (valor > LIMITE_24990) return LIMITE_24990;
    return valor * FACTOR_24990;
}
