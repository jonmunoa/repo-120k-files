// fichero 39470 -- macros y constantes -- MODIFICADO
#define LIMITE_39470 39670
#define FACTOR_39470 2

int aplicar_limite39470(int valor) {
    if (valor > LIMITE_39470) return LIMITE_39470;
    return valor * FACTOR_39470;
}
