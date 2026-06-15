// fichero 44470 -- macros y constantes -- MODIFICADO
#define LIMITE_44470 44670
#define FACTOR_44470 2

int aplicar_limite44470(int valor) {
    if (valor > LIMITE_44470) return LIMITE_44470;
    return valor * FACTOR_44470;
}
