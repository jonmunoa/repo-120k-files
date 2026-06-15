// fichero 9314 -- macros y constantes -- MODIFICADO
#define LIMITE_9314 9514
#define FACTOR_9314 6

int aplicar_limite9314(int valor) {
    if (valor > LIMITE_9314) return LIMITE_9314;
    return valor * FACTOR_9314;
}
