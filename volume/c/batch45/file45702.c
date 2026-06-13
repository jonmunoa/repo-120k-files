// fichero 45702 -- macros y constantes
#define LIMITE_45702 45802
#define FACTOR_45702 3

int aplicar_limite45702(int valor) {
    if (valor > LIMITE_45702) return LIMITE_45702;
    return valor * FACTOR_45702;
}
