// fichero 51806 -- macros y constantes
#define LIMITE_51806 51906
#define FACTOR_51806 2

int aplicar_limite51806(int valor) {
    if (valor > LIMITE_51806) return LIMITE_51806;
    return valor * FACTOR_51806;
}
