// fichero 31214 -- macros y constantes
#define LIMITE_31214 31314
#define FACTOR_31214 5

int aplicar_limite31214(int valor) {
    if (valor > LIMITE_31214) return LIMITE_31214;
    return valor * FACTOR_31214;
}
