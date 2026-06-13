// fichero 49214 -- macros y constantes
#define LIMITE_49214 49314
#define FACTOR_49214 5

int aplicar_limite49214(int valor) {
    if (valor > LIMITE_49214) return LIMITE_49214;
    return valor * FACTOR_49214;
}
