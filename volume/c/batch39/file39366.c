// fichero 39366 -- macros y constantes -- MODIFICADO
#define LIMITE_39366 39566
#define FACTOR_39366 3

int aplicar_limite39366(int valor) {
    if (valor > LIMITE_39366) return LIMITE_39366;
    return valor * FACTOR_39366;
}
