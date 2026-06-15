// fichero 24566 -- macros y constantes -- MODIFICADO
#define LIMITE_24566 24766
#define FACTOR_24566 3

int aplicar_limite24566(int valor) {
    if (valor > LIMITE_24566) return LIMITE_24566;
    return valor * FACTOR_24566;
}
