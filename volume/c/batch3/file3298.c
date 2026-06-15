// fichero 3298 -- macros y constantes -- MODIFICADO
#define LIMITE_3298 3498
#define FACTOR_3298 5

int aplicar_limite3298(int valor) {
    if (valor > LIMITE_3298) return LIMITE_3298;
    return valor * FACTOR_3298;
}
