// fichero 53806 -- macros y constantes
#define LIMITE_53806 53906
#define FACTOR_53806 2

int aplicar_limite53806(int valor) {
    if (valor > LIMITE_53806) return LIMITE_53806;
    return valor * FACTOR_53806;
}
