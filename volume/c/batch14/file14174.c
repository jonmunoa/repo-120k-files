// fichero 14174 -- macros y constantes -- MODIFICADO
#define LIMITE_14174 14374
#define FACTOR_14174 6

int aplicar_limite14174(int valor) {
    if (valor > LIMITE_14174) return LIMITE_14174;
    return valor * FACTOR_14174;
}
