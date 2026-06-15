// fichero 3174 -- macros y constantes -- MODIFICADO
#define LIMITE_3174 3374
#define FACTOR_3174 6

int aplicar_limite3174(int valor) {
    if (valor > LIMITE_3174) return LIMITE_3174;
    return valor * FACTOR_3174;
}
