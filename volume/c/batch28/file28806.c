// fichero 28806 -- macros y constantes -- MODIFICADO
#define LIMITE_28806 29006
#define FACTOR_28806 3

int aplicar_limite28806(int valor) {
    if (valor > LIMITE_28806) return LIMITE_28806;
    return valor * FACTOR_28806;
}
