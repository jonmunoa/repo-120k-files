// fichero 5566 -- macros y constantes -- MODIFICADO
#define LIMITE_5566 5766
#define FACTOR_5566 3

int aplicar_limite5566(int valor) {
    if (valor > LIMITE_5566) return LIMITE_5566;
    return valor * FACTOR_5566;
}
