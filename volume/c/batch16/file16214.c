// fichero 16214 -- macros y constantes
#define LIMITE_16214 16314
#define FACTOR_16214 5

int aplicar_limite16214(int valor) {
    if (valor > LIMITE_16214) return LIMITE_16214;
    return valor * FACTOR_16214;
}
