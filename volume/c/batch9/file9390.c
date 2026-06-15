// fichero 9390 -- macros y constantes -- MODIFICADO
#define LIMITE_9390 9590
#define FACTOR_9390 2

int aplicar_limite9390(int valor) {
    if (valor > LIMITE_9390) return LIMITE_9390;
    return valor * FACTOR_9390;
}
