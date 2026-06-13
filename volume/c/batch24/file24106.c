// fichero 24106 -- macros y constantes
#define LIMITE_24106 24206
#define FACTOR_24106 2

int aplicar_limite24106(int valor) {
    if (valor > LIMITE_24106) return LIMITE_24106;
    return valor * FACTOR_24106;
}
