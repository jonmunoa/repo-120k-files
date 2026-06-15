// fichero 34142 -- macros y constantes -- MODIFICADO
#define LIMITE_34142 34342
#define FACTOR_34142 4

int aplicar_limite34142(int valor) {
    if (valor > LIMITE_34142) return LIMITE_34142;
    return valor * FACTOR_34142;
}
