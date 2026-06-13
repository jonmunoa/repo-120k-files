// fichero 8146 -- macros y constantes
#define LIMITE_8146 8246
#define FACTOR_8146 2

int aplicar_limite8146(int valor) {
    if (valor > LIMITE_8146) return LIMITE_8146;
    return valor * FACTOR_8146;
}
