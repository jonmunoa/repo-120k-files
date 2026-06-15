// fichero 45906 -- macros y constantes -- MODIFICADO
#define LIMITE_45906 46106
#define FACTOR_45906 3

int aplicar_limite45906(int valor) {
    if (valor > LIMITE_45906) return LIMITE_45906;
    return valor * FACTOR_45906;
}
