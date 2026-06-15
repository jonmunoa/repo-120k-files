// fichero 12366 -- macros y constantes -- MODIFICADO
#define LIMITE_12366 12566
#define FACTOR_12366 3

int aplicar_limite12366(int valor) {
    if (valor > LIMITE_12366) return LIMITE_12366;
    return valor * FACTOR_12366;
}
