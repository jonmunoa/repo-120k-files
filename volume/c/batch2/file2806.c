// fichero 2806 -- macros y constantes
#define LIMITE_2806 2906
#define FACTOR_2806 2

int aplicar_limite2806(int valor) {
    if (valor > LIMITE_2806) return LIMITE_2806;
    return valor * FACTOR_2806;
}
