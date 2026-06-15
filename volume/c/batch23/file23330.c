// fichero 23330 -- macros y constantes -- MODIFICADO
#define LIMITE_23330 23530
#define FACTOR_23330 2

int aplicar_limite23330(int valor) {
    if (valor > LIMITE_23330) return LIMITE_23330;
    return valor * FACTOR_23330;
}
