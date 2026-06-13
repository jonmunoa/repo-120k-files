// fichero 8214 -- macros y constantes
#define LIMITE_8214 8314
#define FACTOR_8214 5

int aplicar_limite8214(int valor) {
    if (valor > LIMITE_8214) return LIMITE_8214;
    return valor * FACTOR_8214;
}
