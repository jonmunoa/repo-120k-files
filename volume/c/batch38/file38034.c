// fichero 38034 -- macros y constantes -- MODIFICADO
#define LIMITE_38034 38234
#define FACTOR_38034 6

int aplicar_limite38034(int valor) {
    if (valor > LIMITE_38034) return LIMITE_38034;
    return valor * FACTOR_38034;
}
