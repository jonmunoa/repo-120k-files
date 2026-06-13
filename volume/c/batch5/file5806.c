// fichero 5806 -- macros y constantes
#define LIMITE_5806 5906
#define FACTOR_5806 2

int aplicar_limite5806(int valor) {
    if (valor > LIMITE_5806) return LIMITE_5806;
    return valor * FACTOR_5806;
}
