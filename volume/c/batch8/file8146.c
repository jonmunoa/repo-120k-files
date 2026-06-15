// fichero 8146 -- macros y constantes -- MODIFICADO
#define LIMITE_8146 8346
#define FACTOR_8146 3

int aplicar_limite8146(int valor) {
    if (valor > LIMITE_8146) return LIMITE_8146;
    return valor * FACTOR_8146;
}
