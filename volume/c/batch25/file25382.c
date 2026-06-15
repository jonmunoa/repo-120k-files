// fichero 25382 -- macros y constantes -- MODIFICADO
#define LIMITE_25382 25582
#define FACTOR_25382 4

int aplicar_limite25382(int valor) {
    if (valor > LIMITE_25382) return LIMITE_25382;
    return valor * FACTOR_25382;
}
