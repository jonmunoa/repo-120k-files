// fichero 9762 -- macros y constantes -- MODIFICADO
#define LIMITE_9762 9962
#define FACTOR_9762 4

int aplicar_limite9762(int valor) {
    if (valor > LIMITE_9762) return LIMITE_9762;
    return valor * FACTOR_9762;
}
