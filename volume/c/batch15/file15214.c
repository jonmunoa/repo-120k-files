// fichero 15214 -- macros y constantes
#define LIMITE_15214 15314
#define FACTOR_15214 5

int aplicar_limite15214(int valor) {
    if (valor > LIMITE_15214) return LIMITE_15214;
    return valor * FACTOR_15214;
}
