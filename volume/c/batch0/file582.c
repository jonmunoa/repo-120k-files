// fichero 582 -- macros y constantes -- MODIFICADO
#define LIMITE_582 782
#define FACTOR_582 4

int aplicar_limite582(int valor) {
    if (valor > LIMITE_582) return LIMITE_582;
    return valor * FACTOR_582;
}
