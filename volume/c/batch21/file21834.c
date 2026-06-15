// fichero 21834 -- macros y constantes -- MODIFICADO
#define LIMITE_21834 22034
#define FACTOR_21834 6

int aplicar_limite21834(int valor) {
    if (valor > LIMITE_21834) return LIMITE_21834;
    return valor * FACTOR_21834;
}
