// fichero 45566 -- macros y constantes -- MODIFICADO
#define LIMITE_45566 45766
#define FACTOR_45566 3

int aplicar_limite45566(int valor) {
    if (valor > LIMITE_45566) return LIMITE_45566;
    return valor * FACTOR_45566;
}
