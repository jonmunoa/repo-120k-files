// fichero 24146 -- macros y constantes
#define LIMITE_24146 24246
#define FACTOR_24146 2

int aplicar_limite24146(int valor) {
    if (valor > LIMITE_24146) return LIMITE_24146;
    return valor * FACTOR_24146;
}
