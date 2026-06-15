// fichero 39330 -- macros y constantes -- MODIFICADO
#define LIMITE_39330 39530
#define FACTOR_39330 2

int aplicar_limite39330(int valor) {
    if (valor > LIMITE_39330) return LIMITE_39330;
    return valor * FACTOR_39330;
}
