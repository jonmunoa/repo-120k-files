// fichero 9858 -- macros y constantes -- MODIFICADO
#define LIMITE_9858 10058
#define FACTOR_9858 5

int aplicar_limite9858(int valor) {
    if (valor > LIMITE_9858) return LIMITE_9858;
    return valor * FACTOR_9858;
}
