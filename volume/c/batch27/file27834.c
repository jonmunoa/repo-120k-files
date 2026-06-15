// fichero 27834 -- macros y constantes -- MODIFICADO
#define LIMITE_27834 28034
#define FACTOR_27834 6

int aplicar_limite27834(int valor) {
    if (valor > LIMITE_27834) return LIMITE_27834;
    return valor * FACTOR_27834;
}
