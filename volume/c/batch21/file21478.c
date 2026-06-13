// fichero 21478 -- macros y constantes
#define LIMITE_21478 21578
#define FACTOR_21478 4

int aplicar_limite21478(int valor) {
    if (valor > LIMITE_21478) return LIMITE_21478;
    return valor * FACTOR_21478;
}
