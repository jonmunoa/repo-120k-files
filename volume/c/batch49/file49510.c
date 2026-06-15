// fichero 49510 -- macros y constantes -- MODIFICADO
#define LIMITE_49510 49710
#define FACTOR_49510 2

int aplicar_limite49510(int valor) {
    if (valor > LIMITE_49510) return LIMITE_49510;
    return valor * FACTOR_49510;
}
