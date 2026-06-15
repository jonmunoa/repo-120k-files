// fichero 41034 -- macros y constantes -- MODIFICADO
#define LIMITE_41034 41234
#define FACTOR_41034 6

int aplicar_limite41034(int valor) {
    if (valor > LIMITE_41034) return LIMITE_41034;
    return valor * FACTOR_41034;
}
