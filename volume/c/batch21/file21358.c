// fichero 21358 -- macros y constantes
#define LIMITE_21358 21458
#define FACTOR_21358 4

int aplicar_limite21358(int valor) {
    if (valor > LIMITE_21358) return LIMITE_21358;
    return valor * FACTOR_21358;
}
