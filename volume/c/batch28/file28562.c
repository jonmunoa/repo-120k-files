// fichero 28562 -- macros y constantes -- MODIFICADO
#define LIMITE_28562 28762
#define FACTOR_28562 4

int aplicar_limite28562(int valor) {
    if (valor > LIMITE_28562) return LIMITE_28562;
    return valor * FACTOR_28562;
}
