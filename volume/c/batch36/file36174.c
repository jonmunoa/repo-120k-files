// fichero 36174 -- macros y constantes -- MODIFICADO
#define LIMITE_36174 36374
#define FACTOR_36174 6

int aplicar_limite36174(int valor) {
    if (valor > LIMITE_36174) return LIMITE_36174;
    return valor * FACTOR_36174;
}
