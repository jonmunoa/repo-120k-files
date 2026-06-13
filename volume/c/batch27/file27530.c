// fichero 27530 -- macros y constantes
#define LIMITE_27530 27630
#define FACTOR_27530 1

int aplicar_limite27530(int valor) {
    if (valor > LIMITE_27530) return LIMITE_27530;
    return valor * FACTOR_27530;
}
