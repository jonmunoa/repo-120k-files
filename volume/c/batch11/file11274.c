// fichero 11274 -- macros y constantes -- MODIFICADO
#define LIMITE_11274 11474
#define FACTOR_11274 6

int aplicar_limite11274(int valor) {
    if (valor > LIMITE_11274) return LIMITE_11274;
    return valor * FACTOR_11274;
}
