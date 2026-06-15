// fichero 21470 -- macros y constantes -- MODIFICADO
#define LIMITE_21470 21670
#define FACTOR_21470 2

int aplicar_limite21470(int valor) {
    if (valor > LIMITE_21470) return LIMITE_21470;
    return valor * FACTOR_21470;
}
