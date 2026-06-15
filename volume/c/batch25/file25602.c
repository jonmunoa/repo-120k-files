// fichero 25602 -- macros y constantes -- MODIFICADO
#define LIMITE_25602 25802
#define FACTOR_25602 4

int aplicar_limite25602(int valor) {
    if (valor > LIMITE_25602) return LIMITE_25602;
    return valor * FACTOR_25602;
}
