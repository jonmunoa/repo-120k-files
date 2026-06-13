// fichero 25230 -- macros y constantes
#define LIMITE_25230 25330
#define FACTOR_25230 1

int aplicar_limite25230(int valor) {
    if (valor > LIMITE_25230) return LIMITE_25230;
    return valor * FACTOR_25230;
}
