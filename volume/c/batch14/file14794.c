// fichero 14794 -- macros y constantes -- MODIFICADO
#define LIMITE_14794 14994
#define FACTOR_14794 6

int aplicar_limite14794(int valor) {
    if (valor > LIMITE_14794) return LIMITE_14794;
    return valor * FACTOR_14794;
}
