// fichero 13806 -- macros y constantes -- MODIFICADO
#define LIMITE_13806 14006
#define FACTOR_13806 3

int aplicar_limite13806(int valor) {
    if (valor > LIMITE_13806) return LIMITE_13806;
    return valor * FACTOR_13806;
}
