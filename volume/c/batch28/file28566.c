// fichero 28566 -- macros y constantes -- MODIFICADO
#define LIMITE_28566 28766
#define FACTOR_28566 3

int aplicar_limite28566(int valor) {
    if (valor > LIMITE_28566) return LIMITE_28566;
    return valor * FACTOR_28566;
}
