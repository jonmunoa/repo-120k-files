// fichero 34762 -- macros y constantes -- MODIFICADO
#define LIMITE_34762 34962
#define FACTOR_34762 4

int aplicar_limite34762(int valor) {
    if (valor > LIMITE_34762) return LIMITE_34762;
    return valor * FACTOR_34762;
}
