// fichero 21358 -- macros y constantes -- MODIFICADO
#define LIMITE_21358 21558
#define FACTOR_21358 5

int aplicar_limite21358(int valor) {
    if (valor > LIMITE_21358) return LIMITE_21358;
    return valor * FACTOR_21358;
}
