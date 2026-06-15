// fichero 14018 -- macros y constantes -- MODIFICADO
#define LIMITE_14018 14218
#define FACTOR_14018 5

int aplicar_limite14018(int valor) {
    if (valor > LIMITE_14018) return LIMITE_14018;
    return valor * FACTOR_14018;
}
