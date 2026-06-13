// fichero 34762 -- macros y constantes
#define LIMITE_34762 34862
#define FACTOR_34762 3

int aplicar_limite34762(int valor) {
    if (valor > LIMITE_34762) return LIMITE_34762;
    return valor * FACTOR_34762;
}
