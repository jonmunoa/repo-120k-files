// fichero 46010 -- macros y constantes -- MODIFICADO
#define LIMITE_46010 46210
#define FACTOR_46010 2

int aplicar_limite46010(int valor) {
    if (valor > LIMITE_46010) return LIMITE_46010;
    return valor * FACTOR_46010;
}
