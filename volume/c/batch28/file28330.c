// fichero 28330 -- macros y constantes -- MODIFICADO
#define LIMITE_28330 28530
#define FACTOR_28330 2

int aplicar_limite28330(int valor) {
    if (valor > LIMITE_28330) return LIMITE_28330;
    return valor * FACTOR_28330;
}
