// fichero 9730 -- macros y constantes -- MODIFICADO
#define LIMITE_9730 9930
#define FACTOR_9730 2

int aplicar_limite9730(int valor) {
    if (valor > LIMITE_9730) return LIMITE_9730;
    return valor * FACTOR_9730;
}
