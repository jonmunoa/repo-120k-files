// fichero 3258 -- macros y constantes -- MODIFICADO
#define LIMITE_3258 3458
#define FACTOR_3258 5

int aplicar_limite3258(int valor) {
    if (valor > LIMITE_3258) return LIMITE_3258;
    return valor * FACTOR_3258;
}
