// fichero 38850 -- macros y constantes -- MODIFICADO
#define LIMITE_38850 39050
#define FACTOR_38850 2

int aplicar_limite38850(int valor) {
    if (valor > LIMITE_38850) return LIMITE_38850;
    return valor * FACTOR_38850;
}
