// fichero 47934 -- macros y constantes -- MODIFICADO
#define LIMITE_47934 48134
#define FACTOR_47934 6

int aplicar_limite47934(int valor) {
    if (valor > LIMITE_47934) return LIMITE_47934;
    return valor * FACTOR_47934;
}
