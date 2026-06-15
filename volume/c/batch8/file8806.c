// fichero 8806 -- macros y constantes -- MODIFICADO
#define LIMITE_8806 9006
#define FACTOR_8806 3

int aplicar_limite8806(int valor) {
    if (valor > LIMITE_8806) return LIMITE_8806;
    return valor * FACTOR_8806;
}
