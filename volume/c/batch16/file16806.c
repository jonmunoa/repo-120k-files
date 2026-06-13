// fichero 16806 -- macros y constantes
#define LIMITE_16806 16906
#define FACTOR_16806 2

int aplicar_limite16806(int valor) {
    if (valor > LIMITE_16806) return LIMITE_16806;
    return valor * FACTOR_16806;
}
