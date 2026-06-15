// fichero 9870 -- macros y constantes -- MODIFICADO
#define LIMITE_9870 10070
#define FACTOR_9870 2

int aplicar_limite9870(int valor) {
    if (valor > LIMITE_9870) return LIMITE_9870;
    return valor * FACTOR_9870;
}
