// fichero 38146 -- macros y constantes
#define LIMITE_38146 38246
#define FACTOR_38146 2

int aplicar_limite38146(int valor) {
    if (valor > LIMITE_38146) return LIMITE_38146;
    return valor * FACTOR_38146;
}
