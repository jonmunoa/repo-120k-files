// fichero 45530 -- macros y constantes -- MODIFICADO
#define LIMITE_45530 45730
#define FACTOR_45530 2

int aplicar_limite45530(int valor) {
    if (valor > LIMITE_45530) return LIMITE_45530;
    return valor * FACTOR_45530;
}
