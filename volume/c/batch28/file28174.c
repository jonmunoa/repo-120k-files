// fichero 28174 -- macros y constantes -- MODIFICADO
#define LIMITE_28174 28374
#define FACTOR_28174 6

int aplicar_limite28174(int valor) {
    if (valor > LIMITE_28174) return LIMITE_28174;
    return valor * FACTOR_28174;
}
