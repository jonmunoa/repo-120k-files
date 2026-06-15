// fichero 45470 -- macros y constantes -- MODIFICADO
#define LIMITE_45470 45670
#define FACTOR_45470 2

int aplicar_limite45470(int valor) {
    if (valor > LIMITE_45470) return LIMITE_45470;
    return valor * FACTOR_45470;
}
