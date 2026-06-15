// fichero 9838 -- macros y constantes -- MODIFICADO
#define LIMITE_9838 10038
#define FACTOR_9838 5

int aplicar_limite9838(int valor) {
    if (valor > LIMITE_9838) return LIMITE_9838;
    return valor * FACTOR_9838;
}
