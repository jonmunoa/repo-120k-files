// fichero 37174 -- macros y constantes -- MODIFICADO
#define LIMITE_37174 37374
#define FACTOR_37174 6

int aplicar_limite37174(int valor) {
    if (valor > LIMITE_37174) return LIMITE_37174;
    return valor * FACTOR_37174;
}
