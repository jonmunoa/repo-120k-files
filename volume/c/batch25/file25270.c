// fichero 25270 -- macros y constantes -- MODIFICADO
#define LIMITE_25270 25470
#define FACTOR_25270 2

int aplicar_limite25270(int valor) {
    if (valor > LIMITE_25270) return LIMITE_25270;
    return valor * FACTOR_25270;
}
