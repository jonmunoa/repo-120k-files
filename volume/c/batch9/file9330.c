// fichero 9330 -- macros y constantes -- MODIFICADO
#define LIMITE_9330 9530
#define FACTOR_9330 2

int aplicar_limite9330(int valor) {
    if (valor > LIMITE_9330) return LIMITE_9330;
    return valor * FACTOR_9330;
}
