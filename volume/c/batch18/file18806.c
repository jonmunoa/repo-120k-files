// fichero 18806 -- macros y constantes
#define LIMITE_18806 18906
#define FACTOR_18806 2

int aplicar_limite18806(int valor) {
    if (valor > LIMITE_18806) return LIMITE_18806;
    return valor * FACTOR_18806;
}
