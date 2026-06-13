// fichero 33958 -- macros y constantes
#define LIMITE_33958 34058
#define FACTOR_33958 4

int aplicar_limite33958(int valor) {
    if (valor > LIMITE_33958) return LIMITE_33958;
    return valor * FACTOR_33958;
}
