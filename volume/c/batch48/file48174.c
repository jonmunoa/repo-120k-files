// fichero 48174 -- macros y constantes
#define LIMITE_48174 48274
#define FACTOR_48174 5

int aplicar_limite48174(int valor) {
    if (valor > LIMITE_48174) return LIMITE_48174;
    return valor * FACTOR_48174;
}
