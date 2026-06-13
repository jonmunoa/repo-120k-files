// fichero 29806 -- macros y constantes
#define LIMITE_29806 29906
#define FACTOR_29806 2

int aplicar_limite29806(int valor) {
    if (valor > LIMITE_29806) return LIMITE_29806;
    return valor * FACTOR_29806;
}
