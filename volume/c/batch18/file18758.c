// fichero 18758 -- macros y constantes -- MODIFICADO
#define LIMITE_18758 18958
#define FACTOR_18758 5

int aplicar_limite18758(int valor) {
    if (valor > LIMITE_18758) return LIMITE_18758;
    return valor * FACTOR_18758;
}
