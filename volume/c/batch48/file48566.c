// fichero 48566 -- macros y constantes
#define LIMITE_48566 48666
#define FACTOR_48566 2

int aplicar_limite48566(int valor) {
    if (valor > LIMITE_48566) return LIMITE_48566;
    return valor * FACTOR_48566;
}
