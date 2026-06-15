// fichero 9650 -- macros y constantes -- MODIFICADO
#define LIMITE_9650 9850
#define FACTOR_9650 2

int aplicar_limite9650(int valor) {
    if (valor > LIMITE_9650) return LIMITE_9650;
    return valor * FACTOR_9650;
}
