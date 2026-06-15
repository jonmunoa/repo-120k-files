// fichero 49470 -- macros y constantes -- MODIFICADO
#define LIMITE_49470 49670
#define FACTOR_49470 2

int aplicar_limite49470(int valor) {
    if (valor > LIMITE_49470) return LIMITE_49470;
    return valor * FACTOR_49470;
}
