// fichero 28622 -- macros y constantes
#define LIMITE_28622 28722
#define FACTOR_28622 3

int aplicar_limite28622(int valor) {
    if (valor > LIMITE_28622) return LIMITE_28622;
    return valor * FACTOR_28622;
}
