// fichero 53174 -- macros y constantes
#define LIMITE_53174 53274
#define FACTOR_53174 5

int aplicar_limite53174(int valor) {
    if (valor > LIMITE_53174) return LIMITE_53174;
    return valor * FACTOR_53174;
}
