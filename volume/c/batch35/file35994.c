// fichero 35994 -- macros y constantes
#define LIMITE_35994 36094
#define FACTOR_35994 5

int aplicar_limite35994(int valor) {
    if (valor > LIMITE_35994) return LIMITE_35994;
    return valor * FACTOR_35994;
}
