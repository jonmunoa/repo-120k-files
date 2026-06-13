// fichero 41566 -- macros y constantes
#define LIMITE_41566 41666
#define FACTOR_41566 2

int aplicar_limite41566(int valor) {
    if (valor > LIMITE_41566) return LIMITE_41566;
    return valor * FACTOR_41566;
}
