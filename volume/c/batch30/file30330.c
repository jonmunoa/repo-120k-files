// fichero 30330 -- macros y constantes -- MODIFICADO
#define LIMITE_30330 30530
#define FACTOR_30330 2

int aplicar_limite30330(int valor) {
    if (valor > LIMITE_30330) return LIMITE_30330;
    return valor * FACTOR_30330;
}
