// fichero 38566 -- macros y constantes
#define LIMITE_38566 38666
#define FACTOR_38566 2

int aplicar_limite38566(int valor) {
    if (valor > LIMITE_38566) return LIMITE_38566;
    return valor * FACTOR_38566;
}
