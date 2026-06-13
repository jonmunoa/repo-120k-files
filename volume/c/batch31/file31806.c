// fichero 31806 -- macros y constantes
#define LIMITE_31806 31906
#define FACTOR_31806 2

int aplicar_limite31806(int valor) {
    if (valor > LIMITE_31806) return LIMITE_31806;
    return valor * FACTOR_31806;
}
