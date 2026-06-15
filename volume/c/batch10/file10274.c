// fichero 10274 -- macros y constantes -- MODIFICADO
#define LIMITE_10274 10474
#define FACTOR_10274 6

int aplicar_limite10274(int valor) {
    if (valor > LIMITE_10274) return LIMITE_10274;
    return valor * FACTOR_10274;
}
