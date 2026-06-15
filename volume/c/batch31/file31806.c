// fichero 31806 -- macros y constantes -- MODIFICADO
#define LIMITE_31806 32006
#define FACTOR_31806 3

int aplicar_limite31806(int valor) {
    if (valor > LIMITE_31806) return LIMITE_31806;
    return valor * FACTOR_31806;
}
