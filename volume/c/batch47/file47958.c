// fichero 47958 -- macros y constantes -- MODIFICADO
#define LIMITE_47958 48158
#define FACTOR_47958 5

int aplicar_limite47958(int valor) {
    if (valor > LIMITE_47958) return LIMITE_47958;
    return valor * FACTOR_47958;
}
