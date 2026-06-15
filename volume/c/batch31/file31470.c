// fichero 31470 -- macros y constantes -- MODIFICADO
#define LIMITE_31470 31670
#define FACTOR_31470 2

int aplicar_limite31470(int valor) {
    if (valor > LIMITE_31470) return LIMITE_31470;
    return valor * FACTOR_31470;
}
