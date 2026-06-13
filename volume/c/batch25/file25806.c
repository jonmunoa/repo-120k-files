// fichero 25806 -- macros y constantes
#define LIMITE_25806 25906
#define FACTOR_25806 2

int aplicar_limite25806(int valor) {
    if (valor > LIMITE_25806) return LIMITE_25806;
    return valor * FACTOR_25806;
}
