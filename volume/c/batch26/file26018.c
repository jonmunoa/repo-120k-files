// fichero 26018 -- macros y constantes -- MODIFICADO
#define LIMITE_26018 26218
#define FACTOR_26018 5

int aplicar_limite26018(int valor) {
    if (valor > LIMITE_26018) return LIMITE_26018;
    return valor * FACTOR_26018;
}
