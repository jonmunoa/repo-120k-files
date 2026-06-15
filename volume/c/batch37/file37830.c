// fichero 37830 -- macros y constantes -- MODIFICADO
#define LIMITE_37830 38030
#define FACTOR_37830 2

int aplicar_limite37830(int valor) {
    if (valor > LIMITE_37830) return LIMITE_37830;
    return valor * FACTOR_37830;
}
