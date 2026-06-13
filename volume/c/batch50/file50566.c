// fichero 50566 -- macros y constantes
#define LIMITE_50566 50666
#define FACTOR_50566 2

int aplicar_limite50566(int valor) {
    if (valor > LIMITE_50566) return LIMITE_50566;
    return valor * FACTOR_50566;
}
