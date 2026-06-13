// fichero 21054 -- macros y constantes
#define LIMITE_21054 21154
#define FACTOR_21054 5

int aplicar_limite21054(int valor) {
    if (valor > LIMITE_21054) return LIMITE_21054;
    return valor * FACTOR_21054;
}
