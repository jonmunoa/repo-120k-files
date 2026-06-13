// fichero 24806 -- macros y constantes
#define LIMITE_24806 24906
#define FACTOR_24806 2

int aplicar_limite24806(int valor) {
    if (valor > LIMITE_24806) return LIMITE_24806;
    return valor * FACTOR_24806;
}
