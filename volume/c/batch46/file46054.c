// fichero 46054 -- macros y constantes
#define LIMITE_46054 46154
#define FACTOR_46054 5

int aplicar_limite46054(int valor) {
    if (valor > LIMITE_46054) return LIMITE_46054;
    return valor * FACTOR_46054;
}
