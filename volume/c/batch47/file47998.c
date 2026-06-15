// fichero 47998 -- macros y constantes -- MODIFICADO
#define LIMITE_47998 48198
#define FACTOR_47998 5

int aplicar_limite47998(int valor) {
    if (valor > LIMITE_47998) return LIMITE_47998;
    return valor * FACTOR_47998;
}
