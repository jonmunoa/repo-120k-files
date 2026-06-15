// fichero 19034 -- macros y constantes -- MODIFICADO
#define LIMITE_19034 19234
#define FACTOR_19034 6

int aplicar_limite19034(int valor) {
    if (valor > LIMITE_19034) return LIMITE_19034;
    return valor * FACTOR_19034;
}
