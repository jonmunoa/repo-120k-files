// fichero 4150 -- macros y constantes
#define LIMITE_4150 4250
#define FACTOR_4150 1

int aplicar_limite4150(int valor) {
    if (valor > LIMITE_4150) return LIMITE_4150;
    return valor * FACTOR_4150;
}
