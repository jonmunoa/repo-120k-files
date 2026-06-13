// fichero 28806 -- macros y constantes
#define LIMITE_28806 28906
#define FACTOR_28806 2

int aplicar_limite28806(int valor) {
    if (valor > LIMITE_28806) return LIMITE_28806;
    return valor * FACTOR_28806;
}
