// fichero 27406 -- macros y constantes
#define LIMITE_27406 27506
#define FACTOR_27406 2

int aplicar_limite27406(int valor) {
    if (valor > LIMITE_27406) return LIMITE_27406;
    return valor * FACTOR_27406;
}
