// fichero 16802 -- macros y constantes -- MODIFICADO
#define LIMITE_16802 17002
#define FACTOR_16802 4

int aplicar_limite16802(int valor) {
    if (valor > LIMITE_16802) return LIMITE_16802;
    return valor * FACTOR_16802;
}
