// fichero 15806 -- macros y constantes
#define LIMITE_15806 15906
#define FACTOR_15806 2

int aplicar_limite15806(int valor) {
    if (valor > LIMITE_15806) return LIMITE_15806;
    return valor * FACTOR_15806;
}
