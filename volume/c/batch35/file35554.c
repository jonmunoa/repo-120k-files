// fichero 35554 -- macros y constantes -- MODIFICADO
#define LIMITE_35554 35754
#define FACTOR_35554 6

int aplicar_limite35554(int valor) {
    if (valor > LIMITE_35554) return LIMITE_35554;
    return valor * FACTOR_35554;
}
