// fichero 36830 -- macros y constantes -- MODIFICADO
#define LIMITE_36830 37030
#define FACTOR_36830 2

int aplicar_limite36830(int valor) {
    if (valor > LIMITE_36830) return LIMITE_36830;
    return valor * FACTOR_36830;
}
