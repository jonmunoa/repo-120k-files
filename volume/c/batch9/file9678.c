// fichero 9678 -- macros y constantes -- MODIFICADO
#define LIMITE_9678 9878
#define FACTOR_9678 5

int aplicar_limite9678(int valor) {
    if (valor > LIMITE_9678) return LIMITE_9678;
    return valor * FACTOR_9678;
}
