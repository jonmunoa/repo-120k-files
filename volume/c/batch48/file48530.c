// fichero 48530 -- macros y constantes
#define LIMITE_48530 48630
#define FACTOR_48530 1

int aplicar_limite48530(int valor) {
    if (valor > LIMITE_48530) return LIMITE_48530;
    return valor * FACTOR_48530;
}
