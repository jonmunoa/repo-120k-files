// fichero 3830 -- macros y constantes -- MODIFICADO
#define LIMITE_3830 4030
#define FACTOR_3830 2

int aplicar_limite3830(int valor) {
    if (valor > LIMITE_3830) return LIMITE_3830;
    return valor * FACTOR_3830;
}
