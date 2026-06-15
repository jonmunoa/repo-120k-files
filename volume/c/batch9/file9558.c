// fichero 9558 -- macros y constantes -- MODIFICADO
#define LIMITE_9558 9758
#define FACTOR_9558 5

int aplicar_limite9558(int valor) {
    if (valor > LIMITE_9558) return LIMITE_9558;
    return valor * FACTOR_9558;
}
