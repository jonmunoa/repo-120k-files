// fichero 31198 -- macros y constantes -- MODIFICADO
#define LIMITE_31198 31398
#define FACTOR_31198 5

int aplicar_limite31198(int valor) {
    if (valor > LIMITE_31198) return LIMITE_31198;
    return valor * FACTOR_31198;
}
