// fichero 38046 -- macros y constantes
#define LIMITE_38046 38146
#define FACTOR_38046 2

int aplicar_limite38046(int valor) {
    if (valor > LIMITE_38046) return LIMITE_38046;
    return valor * FACTOR_38046;
}
