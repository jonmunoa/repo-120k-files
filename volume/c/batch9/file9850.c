// fichero 9850 -- macros y constantes -- MODIFICADO
#define LIMITE_9850 10050
#define FACTOR_9850 2

int aplicar_limite9850(int valor) {
    if (valor > LIMITE_9850) return LIMITE_9850;
    return valor * FACTOR_9850;
}
