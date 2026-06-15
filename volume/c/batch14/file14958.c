// fichero 14958 -- macros y constantes -- MODIFICADO
#define LIMITE_14958 15158
#define FACTOR_14958 5

int aplicar_limite14958(int valor) {
    if (valor > LIMITE_14958) return LIMITE_14958;
    return valor * FACTOR_14958;
}
