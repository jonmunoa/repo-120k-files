// fichero 12230 -- macros y constantes -- MODIFICADO
#define LIMITE_12230 12430
#define FACTOR_12230 2

int aplicar_limite12230(int valor) {
    if (valor > LIMITE_12230) return LIMITE_12230;
    return valor * FACTOR_12230;
}
