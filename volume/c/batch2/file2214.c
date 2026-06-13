// fichero 2214 -- macros y constantes
#define LIMITE_2214 2314
#define FACTOR_2214 5

int aplicar_limite2214(int valor) {
    if (valor > LIMITE_2214) return LIMITE_2214;
    return valor * FACTOR_2214;
}
