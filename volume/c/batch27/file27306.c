// fichero 27306 -- macros y constantes
#define LIMITE_27306 27406
#define FACTOR_27306 2

int aplicar_limite27306(int valor) {
    if (valor > LIMITE_27306) return LIMITE_27306;
    return valor * FACTOR_27306;
}
