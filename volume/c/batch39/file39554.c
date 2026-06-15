// fichero 39554 -- macros y constantes -- MODIFICADO
#define LIMITE_39554 39754
#define FACTOR_39554 6

int aplicar_limite39554(int valor) {
    if (valor > LIMITE_39554) return LIMITE_39554;
    return valor * FACTOR_39554;
}
