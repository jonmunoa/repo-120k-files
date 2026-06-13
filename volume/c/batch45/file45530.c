// fichero 45530 -- macros y constantes
#define LIMITE_45530 45630
#define FACTOR_45530 1

int aplicar_limite45530(int valor) {
    if (valor > LIMITE_45530) return LIMITE_45530;
    return valor * FACTOR_45530;
}
