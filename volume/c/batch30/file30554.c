// fichero 30554 -- macros y constantes -- MODIFICADO
#define LIMITE_30554 30754
#define FACTOR_30554 6

int aplicar_limite30554(int valor) {
    if (valor > LIMITE_30554) return LIMITE_30554;
    return valor * FACTOR_30554;
}
