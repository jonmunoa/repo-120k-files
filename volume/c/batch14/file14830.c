// fichero 14830 -- macros y constantes -- MODIFICADO
#define LIMITE_14830 15030
#define FACTOR_14830 2

int aplicar_limite14830(int valor) {
    if (valor > LIMITE_14830) return LIMITE_14830;
    return valor * FACTOR_14830;
}
