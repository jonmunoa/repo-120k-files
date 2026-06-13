// fichero 37174 -- macros y constantes
#define LIMITE_37174 37274
#define FACTOR_37174 5

int aplicar_limite37174(int valor) {
    if (valor > LIMITE_37174) return LIMITE_37174;
    return valor * FACTOR_37174;
}
