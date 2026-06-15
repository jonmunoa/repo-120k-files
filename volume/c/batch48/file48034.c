// fichero 48034 -- macros y constantes -- MODIFICADO
#define LIMITE_48034 48234
#define FACTOR_48034 6

int aplicar_limite48034(int valor) {
    if (valor > LIMITE_48034) return LIMITE_48034;
    return valor * FACTOR_48034;
}
