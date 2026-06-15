// fichero 18566 -- macros y constantes -- MODIFICADO
#define LIMITE_18566 18766
#define FACTOR_18566 3

int aplicar_limite18566(int valor) {
    if (valor > LIMITE_18566) return LIMITE_18566;
    return valor * FACTOR_18566;
}
