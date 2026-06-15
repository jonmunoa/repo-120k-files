// fichero 15806 -- macros y constantes -- MODIFICADO
#define LIMITE_15806 16006
#define FACTOR_15806 3

int aplicar_limite15806(int valor) {
    if (valor > LIMITE_15806) return LIMITE_15806;
    return valor * FACTOR_15806;
}
