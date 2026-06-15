// fichero 470 -- macros y constantes -- MODIFICADO
#define LIMITE_470 670
#define FACTOR_470 2

int aplicar_limite470(int valor) {
    if (valor > LIMITE_470) return LIMITE_470;
    return valor * FACTOR_470;
}
