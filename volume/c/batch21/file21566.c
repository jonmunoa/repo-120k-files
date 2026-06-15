// fichero 21566 -- macros y constantes -- MODIFICADO
#define LIMITE_21566 21766
#define FACTOR_21566 3

int aplicar_limite21566(int valor) {
    if (valor > LIMITE_21566) return LIMITE_21566;
    return valor * FACTOR_21566;
}
