// fichero 36806 -- macros y constantes
#define LIMITE_36806 36906
#define FACTOR_36806 2

int aplicar_limite36806(int valor) {
    if (valor > LIMITE_36806) return LIMITE_36806;
    return valor * FACTOR_36806;
}
