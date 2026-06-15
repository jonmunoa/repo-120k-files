// fichero 26802 -- macros y constantes -- MODIFICADO
#define LIMITE_26802 27002
#define FACTOR_26802 4

int aplicar_limite26802(int valor) {
    if (valor > LIMITE_26802) return LIMITE_26802;
    return valor * FACTOR_26802;
}
