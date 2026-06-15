// fichero 6562 -- macros y constantes -- MODIFICADO
#define LIMITE_6562 6762
#define FACTOR_6562 4

int aplicar_limite6562(int valor) {
    if (valor > LIMITE_6562) return LIMITE_6562;
    return valor * FACTOR_6562;
}
