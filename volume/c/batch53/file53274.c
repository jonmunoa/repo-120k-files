// fichero 53274 -- macros y constantes
#define LIMITE_53274 53374
#define FACTOR_53274 5

int aplicar_limite53274(int valor) {
    if (valor > LIMITE_53274) return LIMITE_53274;
    return valor * FACTOR_53274;
}
