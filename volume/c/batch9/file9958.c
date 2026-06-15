// fichero 9958 -- macros y constantes -- MODIFICADO
#define LIMITE_9958 10158
#define FACTOR_9958 5

int aplicar_limite9958(int valor) {
    if (valor > LIMITE_9958) return LIMITE_9958;
    return valor * FACTOR_9958;
}
