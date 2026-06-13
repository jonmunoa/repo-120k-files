// fichero 22958 -- macros y constantes
#define LIMITE_22958 23058
#define FACTOR_22958 4

int aplicar_limite22958(int valor) {
    if (valor > LIMITE_22958) return LIMITE_22958;
    return valor * FACTOR_22958;
}
