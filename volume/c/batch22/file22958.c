// fichero 22958 -- macros y constantes -- MODIFICADO
#define LIMITE_22958 23158
#define FACTOR_22958 5

int aplicar_limite22958(int valor) {
    if (valor > LIMITE_22958) return LIMITE_22958;
    return valor * FACTOR_22958;
}
