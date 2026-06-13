// fichero 6214 -- macros y constantes
#define LIMITE_6214 6314
#define FACTOR_6214 5

int aplicar_limite6214(int valor) {
    if (valor > LIMITE_6214) return LIMITE_6214;
    return valor * FACTOR_6214;
}
