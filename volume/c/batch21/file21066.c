// fichero 21066 -- macros y constantes -- MODIFICADO
#define LIMITE_21066 21266
#define FACTOR_21066 3

int aplicar_limite21066(int valor) {
    if (valor > LIMITE_21066) return LIMITE_21066;
    return valor * FACTOR_21066;
}
