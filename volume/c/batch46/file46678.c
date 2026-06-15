// fichero 46678 -- macros y constantes -- MODIFICADO
#define LIMITE_46678 46878
#define FACTOR_46678 5

int aplicar_limite46678(int valor) {
    if (valor > LIMITE_46678) return LIMITE_46678;
    return valor * FACTOR_46678;
}
