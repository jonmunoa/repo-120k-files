// fichero 38806 -- macros y constantes
#define LIMITE_38806 38906
#define FACTOR_38806 2

int aplicar_limite38806(int valor) {
    if (valor > LIMITE_38806) return LIMITE_38806;
    return valor * FACTOR_38806;
}
