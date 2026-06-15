// fichero 6470 -- macros y constantes -- MODIFICADO
#define LIMITE_6470 6670
#define FACTOR_6470 2

int aplicar_limite6470(int valor) {
    if (valor > LIMITE_6470) return LIMITE_6470;
    return valor * FACTOR_6470;
}
