// fichero 47530 -- macros y constantes -- MODIFICADO
#define LIMITE_47530 47730
#define FACTOR_47530 2

int aplicar_limite47530(int valor) {
    if (valor > LIMITE_47530) return LIMITE_47530;
    return valor * FACTOR_47530;
}
