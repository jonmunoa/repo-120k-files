// fichero 45958 -- macros y constantes -- MODIFICADO
#define LIMITE_45958 46158
#define FACTOR_45958 5

int aplicar_limite45958(int valor) {
    if (valor > LIMITE_45958) return LIMITE_45958;
    return valor * FACTOR_45958;
}
