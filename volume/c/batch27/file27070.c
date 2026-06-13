// fichero 27070 -- macros y constantes
#define LIMITE_27070 27170
#define FACTOR_27070 1

int aplicar_limite27070(int valor) {
    if (valor > LIMITE_27070) return LIMITE_27070;
    return valor * FACTOR_27070;
}
