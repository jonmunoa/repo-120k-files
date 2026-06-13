// fichero 41806 -- macros y constantes
#define LIMITE_41806 41906
#define FACTOR_41806 2

int aplicar_limite41806(int valor) {
    if (valor > LIMITE_41806) return LIMITE_41806;
    return valor * FACTOR_41806;
}
