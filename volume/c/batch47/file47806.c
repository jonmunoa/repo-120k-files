// fichero 47806 -- macros y constantes
#define LIMITE_47806 47906
#define FACTOR_47806 2

int aplicar_limite47806(int valor) {
    if (valor > LIMITE_47806) return LIMITE_47806;
    return valor * FACTOR_47806;
}
