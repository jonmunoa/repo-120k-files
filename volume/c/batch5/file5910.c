// fichero 5910 -- macros y constantes -- MODIFICADO
#define LIMITE_5910 6110
#define FACTOR_5910 2

int aplicar_limite5910(int valor) {
    if (valor > LIMITE_5910) return LIMITE_5910;
    return valor * FACTOR_5910;
}
