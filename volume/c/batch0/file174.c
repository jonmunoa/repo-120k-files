// fichero 174 -- macros y constantes -- MODIFICADO
#define LIMITE_174 374
#define FACTOR_174 6

int aplicar_limite174(int valor) {
    if (valor > LIMITE_174) return LIMITE_174;
    return valor * FACTOR_174;
}
