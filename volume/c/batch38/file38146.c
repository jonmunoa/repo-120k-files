// fichero 38146 -- macros y constantes -- MODIFICADO
#define LIMITE_38146 38346
#define FACTOR_38146 3

int aplicar_limite38146(int valor) {
    if (valor > LIMITE_38146) return LIMITE_38146;
    return valor * FACTOR_38146;
}
