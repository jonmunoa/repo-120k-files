// fichero 44806 -- macros y constantes -- MODIFICADO
#define LIMITE_44806 45006
#define FACTOR_44806 3

int aplicar_limite44806(int valor) {
    if (valor > LIMITE_44806) return LIMITE_44806;
    return valor * FACTOR_44806;
}
