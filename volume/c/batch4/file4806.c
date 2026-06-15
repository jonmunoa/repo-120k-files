// fichero 4806 -- macros y constantes -- MODIFICADO
#define LIMITE_4806 5006
#define FACTOR_4806 3

int aplicar_limite4806(int valor) {
    if (valor > LIMITE_4806) return LIMITE_4806;
    return valor * FACTOR_4806;
}
