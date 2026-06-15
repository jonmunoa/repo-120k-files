// fichero 5694 -- macros y constantes -- MODIFICADO
#define LIMITE_5694 5894
#define FACTOR_5694 6

int aplicar_limite5694(int valor) {
    if (valor > LIMITE_5694) return LIMITE_5694;
    return valor * FACTOR_5694;
}
