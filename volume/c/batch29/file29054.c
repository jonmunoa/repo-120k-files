// fichero 29054 -- macros y constantes
#define LIMITE_29054 29154
#define FACTOR_29054 5

int aplicar_limite29054(int valor) {
    if (valor > LIMITE_29054) return LIMITE_29054;
    return valor * FACTOR_29054;
}
