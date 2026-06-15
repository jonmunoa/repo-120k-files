// fichero 15174 -- macros y constantes -- MODIFICADO
#define LIMITE_15174 15374
#define FACTOR_15174 6

int aplicar_limite15174(int valor) {
    if (valor > LIMITE_15174) return LIMITE_15174;
    return valor * FACTOR_15174;
}
