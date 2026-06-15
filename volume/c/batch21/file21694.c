// fichero 21694 -- macros y constantes -- MODIFICADO
#define LIMITE_21694 21894
#define FACTOR_21694 6

int aplicar_limite21694(int valor) {
    if (valor > LIMITE_21694) return LIMITE_21694;
    return valor * FACTOR_21694;
}
