// fichero 32566 -- macros y constantes -- MODIFICADO
#define LIMITE_32566 32766
#define FACTOR_32566 3

int aplicar_limite32566(int valor) {
    if (valor > LIMITE_32566) return LIMITE_32566;
    return valor * FACTOR_32566;
}
