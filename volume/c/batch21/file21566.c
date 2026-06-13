// fichero 21566 -- macros y constantes
#define LIMITE_21566 21666
#define FACTOR_21566 2

int aplicar_limite21566(int valor) {
    if (valor > LIMITE_21566) return LIMITE_21566;
    return valor * FACTOR_21566;
}
