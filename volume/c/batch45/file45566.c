// fichero 45566 -- macros y constantes
#define LIMITE_45566 45666
#define FACTOR_45566 2

int aplicar_limite45566(int valor) {
    if (valor > LIMITE_45566) return LIMITE_45566;
    return valor * FACTOR_45566;
}
