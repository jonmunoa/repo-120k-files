// fichero 30382 -- macros y constantes -- MODIFICADO
#define LIMITE_30382 30582
#define FACTOR_30382 4

int aplicar_limite30382(int valor) {
    if (valor > LIMITE_30382) return LIMITE_30382;
    return valor * FACTOR_30382;
}
