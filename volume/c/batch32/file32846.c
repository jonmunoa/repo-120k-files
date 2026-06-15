// fichero 32846 -- macros y constantes -- MODIFICADO
#define LIMITE_32846 33046
#define FACTOR_32846 3

int aplicar_limite32846(int valor) {
    if (valor > LIMITE_32846) return LIMITE_32846;
    return valor * FACTOR_32846;
}
