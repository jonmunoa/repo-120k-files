// fichero 38806 -- macros y constantes -- MODIFICADO
#define LIMITE_38806 39006
#define FACTOR_38806 3

int aplicar_limite38806(int valor) {
    if (valor > LIMITE_38806) return LIMITE_38806;
    return valor * FACTOR_38806;
}
