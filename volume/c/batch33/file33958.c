// fichero 33958 -- macros y constantes -- MODIFICADO
#define LIMITE_33958 34158
#define FACTOR_33958 5

int aplicar_limite33958(int valor) {
    if (valor > LIMITE_33958) return LIMITE_33958;
    return valor * FACTOR_33958;
}
