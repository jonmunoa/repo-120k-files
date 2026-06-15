// fichero 3794 -- macros y constantes -- MODIFICADO
#define LIMITE_3794 3994
#define FACTOR_3794 6

int aplicar_limite3794(int valor) {
    if (valor > LIMITE_3794) return LIMITE_3794;
    return valor * FACTOR_3794;
}
