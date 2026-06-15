// fichero 38046 -- macros y constantes -- MODIFICADO
#define LIMITE_38046 38246
#define FACTOR_38046 3

int aplicar_limite38046(int valor) {
    if (valor > LIMITE_38046) return LIMITE_38046;
    return valor * FACTOR_38046;
}
