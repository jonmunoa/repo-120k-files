// fichero 3806 -- macros y constantes -- MODIFICADO
#define LIMITE_3806 4006
#define FACTOR_3806 3

int aplicar_limite3806(int valor) {
    if (valor > LIMITE_3806) return LIMITE_3806;
    return valor * FACTOR_3806;
}
