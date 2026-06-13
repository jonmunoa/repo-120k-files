// fichero 54566 -- macros y constantes
#define LIMITE_54566 54666
#define FACTOR_54566 2

int aplicar_limite54566(int valor) {
    if (valor > LIMITE_54566) return LIMITE_54566;
    return valor * FACTOR_54566;
}
