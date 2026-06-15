// fichero 20174 -- macros y constantes -- MODIFICADO
#define LIMITE_20174 20374
#define FACTOR_20174 6

int aplicar_limite20174(int valor) {
    if (valor > LIMITE_20174) return LIMITE_20174;
    return valor * FACTOR_20174;
}
