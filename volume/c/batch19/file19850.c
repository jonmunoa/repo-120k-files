// fichero 19850 -- macros y constantes -- MODIFICADO
#define LIMITE_19850 20050
#define FACTOR_19850 2

int aplicar_limite19850(int valor) {
    if (valor > LIMITE_19850) return LIMITE_19850;
    return valor * FACTOR_19850;
}
