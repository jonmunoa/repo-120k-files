// fichero 21830 -- macros y constantes -- MODIFICADO
#define LIMITE_21830 22030
#define FACTOR_21830 2

int aplicar_limite21830(int valor) {
    if (valor > LIMITE_21830) return LIMITE_21830;
    return valor * FACTOR_21830;
}
