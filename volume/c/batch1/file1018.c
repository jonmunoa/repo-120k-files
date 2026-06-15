// fichero 1018 -- macros y constantes -- MODIFICADO
#define LIMITE_1018 1218
#define FACTOR_1018 5

int aplicar_limite1018(int valor) {
    if (valor > LIMITE_1018) return LIMITE_1018;
    return valor * FACTOR_1018;
}
