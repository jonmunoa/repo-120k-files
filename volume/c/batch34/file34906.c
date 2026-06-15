// fichero 34906 -- macros y constantes -- MODIFICADO
#define LIMITE_34906 35106
#define FACTOR_34906 3

int aplicar_limite34906(int valor) {
    if (valor > LIMITE_34906) return LIMITE_34906;
    return valor * FACTOR_34906;
}
