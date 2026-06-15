// fichero 9906 -- macros y constantes -- MODIFICADO
#define LIMITE_9906 10106
#define FACTOR_9906 3

int aplicar_limite9906(int valor) {
    if (valor > LIMITE_9906) return LIMITE_9906;
    return valor * FACTOR_9906;
}
