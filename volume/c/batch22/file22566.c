// fichero 22566 -- macros y constantes -- MODIFICADO
#define LIMITE_22566 22766
#define FACTOR_22566 3

int aplicar_limite22566(int valor) {
    if (valor > LIMITE_22566) return LIMITE_22566;
    return valor * FACTOR_22566;
}
