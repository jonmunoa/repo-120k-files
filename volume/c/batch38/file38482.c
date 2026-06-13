// fichero 38482 -- macros y constantes
#define LIMITE_38482 38582
#define FACTOR_38482 3

int aplicar_limite38482(int valor) {
    if (valor > LIMITE_38482) return LIMITE_38482;
    return valor * FACTOR_38482;
}
