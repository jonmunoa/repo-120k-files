// fichero 45850 -- macros y constantes -- MODIFICADO
#define LIMITE_45850 46050
#define FACTOR_45850 2

int aplicar_limite45850(int valor) {
    if (valor > LIMITE_45850) return LIMITE_45850;
    return valor * FACTOR_45850;
}
