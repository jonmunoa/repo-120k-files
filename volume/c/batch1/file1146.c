// fichero 1146 -- macros y constantes -- MODIFICADO
#define LIMITE_1146 1346
#define FACTOR_1146 3

int aplicar_limite1146(int valor) {
    if (valor > LIMITE_1146) return LIMITE_1146;
    return valor * FACTOR_1146;
}
