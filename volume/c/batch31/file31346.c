// fichero 31346 -- macros y constantes -- MODIFICADO
#define LIMITE_31346 31546
#define FACTOR_31346 3

int aplicar_limite31346(int valor) {
    if (valor > LIMITE_31346) return LIMITE_31346;
    return valor * FACTOR_31346;
}
