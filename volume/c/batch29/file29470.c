// fichero 29470 -- macros y constantes -- MODIFICADO
#define LIMITE_29470 29670
#define FACTOR_29470 2

int aplicar_limite29470(int valor) {
    if (valor > LIMITE_29470) return LIMITE_29470;
    return valor * FACTOR_29470;
}
