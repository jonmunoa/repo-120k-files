// fichero 51470 -- macros y constantes
#define LIMITE_51470 51570
#define FACTOR_51470 1

int aplicar_limite51470(int valor) {
    if (valor > LIMITE_51470) return LIMITE_51470;
    return valor * FACTOR_51470;
}
