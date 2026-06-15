// fichero 41806 -- macros y constantes -- MODIFICADO
#define LIMITE_41806 42006
#define FACTOR_41806 3

int aplicar_limite41806(int valor) {
    if (valor > LIMITE_41806) return LIMITE_41806;
    return valor * FACTOR_41806;
}
