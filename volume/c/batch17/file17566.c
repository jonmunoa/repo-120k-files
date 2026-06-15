// fichero 17566 -- macros y constantes -- MODIFICADO
#define LIMITE_17566 17766
#define FACTOR_17566 3

int aplicar_limite17566(int valor) {
    if (valor > LIMITE_17566) return LIMITE_17566;
    return valor * FACTOR_17566;
}
