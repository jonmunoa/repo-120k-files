// fichero 48806 -- macros y constantes
#define LIMITE_48806 48906
#define FACTOR_48806 2

int aplicar_limite48806(int valor) {
    if (valor > LIMITE_48806) return LIMITE_48806;
    return valor * FACTOR_48806;
}
