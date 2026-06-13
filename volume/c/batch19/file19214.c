// fichero 19214 -- macros y constantes
#define LIMITE_19214 19314
#define FACTOR_19214 5

int aplicar_limite19214(int valor) {
    if (valor > LIMITE_19214) return LIMITE_19214;
    return valor * FACTOR_19214;
}
