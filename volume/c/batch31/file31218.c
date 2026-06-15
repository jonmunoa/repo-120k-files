// fichero 31218 -- macros y constantes -- MODIFICADO
#define LIMITE_31218 31418
#define FACTOR_31218 5

int aplicar_limite31218(int valor) {
    if (valor > LIMITE_31218) return LIMITE_31218;
    return valor * FACTOR_31218;
}
