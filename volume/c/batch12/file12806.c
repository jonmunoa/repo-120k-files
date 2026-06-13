// fichero 12806 -- macros y constantes
#define LIMITE_12806 12906
#define FACTOR_12806 2

int aplicar_limite12806(int valor) {
    if (valor > LIMITE_12806) return LIMITE_12806;
    return valor * FACTOR_12806;
}
