// fichero 46158 -- macros y constantes -- MODIFICADO
#define LIMITE_46158 46358
#define FACTOR_46158 5

int aplicar_limite46158(int valor) {
    if (valor > LIMITE_46158) return LIMITE_46158;
    return valor * FACTOR_46158;
}
