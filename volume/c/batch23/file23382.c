// fichero 23382 -- macros y constantes -- MODIFICADO
#define LIMITE_23382 23582
#define FACTOR_23382 4

int aplicar_limite23382(int valor) {
    if (valor > LIMITE_23382) return LIMITE_23382;
    return valor * FACTOR_23382;
}
