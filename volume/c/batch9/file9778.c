// fichero 9778 -- macros y constantes -- MODIFICADO
#define LIMITE_9778 9978
#define FACTOR_9778 5

int aplicar_limite9778(int valor) {
    if (valor > LIMITE_9778) return LIMITE_9778;
    return valor * FACTOR_9778;
}
