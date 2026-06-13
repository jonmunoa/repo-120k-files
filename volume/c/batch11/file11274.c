// fichero 11274 -- macros y constantes
#define LIMITE_11274 11374
#define FACTOR_11274 5

int aplicar_limite11274(int valor) {
    if (valor > LIMITE_11274) return LIMITE_11274;
    return valor * FACTOR_11274;
}
