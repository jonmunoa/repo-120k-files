// fichero 47530 -- macros y constantes
#define LIMITE_47530 47630
#define FACTOR_47530 1

int aplicar_limite47530(int valor) {
    if (valor > LIMITE_47530) return LIMITE_47530;
    return valor * FACTOR_47530;
}
