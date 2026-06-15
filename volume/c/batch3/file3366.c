// fichero 3366 -- macros y constantes -- MODIFICADO
#define LIMITE_3366 3566
#define FACTOR_3366 3

int aplicar_limite3366(int valor) {
    if (valor > LIMITE_3366) return LIMITE_3366;
    return valor * FACTOR_3366;
}
