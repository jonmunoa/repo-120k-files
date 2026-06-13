// fichero 35214 -- macros y constantes
#define LIMITE_35214 35314
#define FACTOR_35214 5

int aplicar_limite35214(int valor) {
    if (valor > LIMITE_35214) return LIMITE_35214;
    return valor * FACTOR_35214;
}
