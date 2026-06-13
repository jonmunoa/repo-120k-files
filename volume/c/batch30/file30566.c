// fichero 30566 -- macros y constantes
#define LIMITE_30566 30666
#define FACTOR_30566 2

int aplicar_limite30566(int valor) {
    if (valor > LIMITE_30566) return LIMITE_30566;
    return valor * FACTOR_30566;
}
