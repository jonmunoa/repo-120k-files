// fichero 5214 -- macros y constantes
#define LIMITE_5214 5314
#define FACTOR_5214 5

int aplicar_limite5214(int valor) {
    if (valor > LIMITE_5214) return LIMITE_5214;
    return valor * FACTOR_5214;
}
