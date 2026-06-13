// fichero 36174 -- macros y constantes
#define LIMITE_36174 36274
#define FACTOR_36174 5

int aplicar_limite36174(int valor) {
    if (valor > LIMITE_36174) return LIMITE_36174;
    return valor * FACTOR_36174;
}
