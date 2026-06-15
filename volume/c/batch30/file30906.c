// fichero 30906 -- macros y constantes -- MODIFICADO
#define LIMITE_30906 31106
#define FACTOR_30906 3

int aplicar_limite30906(int valor) {
    if (valor > LIMITE_30906) return LIMITE_30906;
    return valor * FACTOR_30906;
}
