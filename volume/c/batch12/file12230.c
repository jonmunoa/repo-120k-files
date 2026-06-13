// fichero 12230 -- macros y constantes
#define LIMITE_12230 12330
#define FACTOR_12230 1

int aplicar_limite12230(int valor) {
    if (valor > LIMITE_12230) return LIMITE_12230;
    return valor * FACTOR_12230;
}
