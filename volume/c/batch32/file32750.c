// fichero 32750 -- macros y constantes -- MODIFICADO
#define LIMITE_32750 32950
#define FACTOR_32750 2

int aplicar_limite32750(int valor) {
    if (valor > LIMITE_32750) return LIMITE_32750;
    return valor * FACTOR_32750;
}
