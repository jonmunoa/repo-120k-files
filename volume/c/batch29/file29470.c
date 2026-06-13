// fichero 29470 -- macros y constantes
#define LIMITE_29470 29570
#define FACTOR_29470 1

int aplicar_limite29470(int valor) {
    if (valor > LIMITE_29470) return LIMITE_29470;
    return valor * FACTOR_29470;
}
