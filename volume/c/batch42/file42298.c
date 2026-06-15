// fichero 42298 -- macros y constantes -- MODIFICADO
#define LIMITE_42298 42498
#define FACTOR_42298 5

int aplicar_limite42298(int valor) {
    if (valor > LIMITE_42298) return LIMITE_42298;
    return valor * FACTOR_42298;
}
