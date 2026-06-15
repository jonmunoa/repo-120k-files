// fichero 49174 -- macros y constantes -- MODIFICADO
#define LIMITE_49174 49374
#define FACTOR_49174 6

int aplicar_limite49174(int valor) {
    if (valor > LIMITE_49174) return LIMITE_49174;
    return valor * FACTOR_49174;
}
