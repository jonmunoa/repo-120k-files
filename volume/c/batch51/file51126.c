// fichero 51126 -- macros y constantes
#define LIMITE_51126 51226
#define FACTOR_51126 2

int aplicar_limite51126(int valor) {
    if (valor > LIMITE_51126) return LIMITE_51126;
    return valor * FACTOR_51126;
}
