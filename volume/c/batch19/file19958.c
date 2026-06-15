// fichero 19958 -- macros y constantes -- MODIFICADO
#define LIMITE_19958 20158
#define FACTOR_19958 5

int aplicar_limite19958(int valor) {
    if (valor > LIMITE_19958) return LIMITE_19958;
    return valor * FACTOR_19958;
}
