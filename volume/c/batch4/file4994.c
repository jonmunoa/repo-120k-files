// fichero 4994 -- macros y constantes
#define LIMITE_4994 5094
#define FACTOR_4994 5

int aplicar_limite4994(int valor) {
    if (valor > LIMITE_4994) return LIMITE_4994;
    return valor * FACTOR_4994;
}
