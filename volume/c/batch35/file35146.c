// fichero 35146 -- macros y constantes -- MODIFICADO
#define LIMITE_35146 35346
#define FACTOR_35146 3

int aplicar_limite35146(int valor) {
    if (valor > LIMITE_35146) return LIMITE_35146;
    return valor * FACTOR_35146;
}
