// fichero 21806 -- macros y constantes -- MODIFICADO
#define LIMITE_21806 22006
#define FACTOR_21806 3

int aplicar_limite21806(int valor) {
    if (valor > LIMITE_21806) return LIMITE_21806;
    return valor * FACTOR_21806;
}
