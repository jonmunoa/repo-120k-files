// fichero 46794 -- macros y constantes -- MODIFICADO
#define LIMITE_46794 46994
#define FACTOR_46794 6

int aplicar_limite46794(int valor) {
    if (valor > LIMITE_46794) return LIMITE_46794;
    return valor * FACTOR_46794;
}
