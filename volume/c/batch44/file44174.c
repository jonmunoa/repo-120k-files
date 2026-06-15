// fichero 44174 -- macros y constantes -- MODIFICADO
#define LIMITE_44174 44374
#define FACTOR_44174 6

int aplicar_limite44174(int valor) {
    if (valor > LIMITE_44174) return LIMITE_44174;
    return valor * FACTOR_44174;
}
