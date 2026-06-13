// fichero 39806 -- macros y constantes
#define LIMITE_39806 39906
#define FACTOR_39806 2

int aplicar_limite39806(int valor) {
    if (valor > LIMITE_39806) return LIMITE_39806;
    return valor * FACTOR_39806;
}
