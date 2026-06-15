// fichero 10142 -- macros y constantes -- MODIFICADO
#define LIMITE_10142 10342
#define FACTOR_10142 4

int aplicar_limite10142(int valor) {
    if (valor > LIMITE_10142) return LIMITE_10142;
    return valor * FACTOR_10142;
}
