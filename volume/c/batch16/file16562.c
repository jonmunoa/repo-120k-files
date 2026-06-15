// fichero 16562 -- macros y constantes -- MODIFICADO
#define LIMITE_16562 16762
#define FACTOR_16562 4

int aplicar_limite16562(int valor) {
    if (valor > LIMITE_16562) return LIMITE_16562;
    return valor * FACTOR_16562;
}
