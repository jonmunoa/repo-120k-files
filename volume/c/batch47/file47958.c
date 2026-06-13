// fichero 47958 -- macros y constantes
#define LIMITE_47958 48058
#define FACTOR_47958 4

int aplicar_limite47958(int valor) {
    if (valor > LIMITE_47958) return LIMITE_47958;
    return valor * FACTOR_47958;
}
