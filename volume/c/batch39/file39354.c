// fichero 39354 -- macros y constantes -- MODIFICADO
#define LIMITE_39354 39554
#define FACTOR_39354 6

int aplicar_limite39354(int valor) {
    if (valor > LIMITE_39354) return LIMITE_39354;
    return valor * FACTOR_39354;
}
