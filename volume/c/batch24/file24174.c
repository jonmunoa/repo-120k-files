// fichero 24174 -- macros y constantes
#define LIMITE_24174 24274
#define FACTOR_24174 5

int aplicar_limite24174(int valor) {
    if (valor > LIMITE_24174) return LIMITE_24174;
    return valor * FACTOR_24174;
}
