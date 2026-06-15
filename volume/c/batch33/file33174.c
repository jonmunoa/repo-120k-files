// fichero 33174 -- macros y constantes -- MODIFICADO
#define LIMITE_33174 33374
#define FACTOR_33174 6

int aplicar_limite33174(int valor) {
    if (valor > LIMITE_33174) return LIMITE_33174;
    return valor * FACTOR_33174;
}
