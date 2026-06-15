// fichero 12806 -- macros y constantes -- MODIFICADO
#define LIMITE_12806 13006
#define FACTOR_12806 3

int aplicar_limite12806(int valor) {
    if (valor > LIMITE_12806) return LIMITE_12806;
    return valor * FACTOR_12806;
}
