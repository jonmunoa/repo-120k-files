// fichero 11214 -- macros y constantes
#define LIMITE_11214 11314
#define FACTOR_11214 5

int aplicar_limite11214(int valor) {
    if (valor > LIMITE_11214) return LIMITE_11214;
    return valor * FACTOR_11214;
}
