// fichero 51958 -- macros y constantes
#define LIMITE_51958 52058
#define FACTOR_51958 4

int aplicar_limite51958(int valor) {
    if (valor > LIMITE_51958) return LIMITE_51958;
    return valor * FACTOR_51958;
}
