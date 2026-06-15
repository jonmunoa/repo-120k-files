// fichero 32146 -- macros y constantes -- MODIFICADO
#define LIMITE_32146 32346
#define FACTOR_32146 3

int aplicar_limite32146(int valor) {
    if (valor > LIMITE_32146) return LIMITE_32146;
    return valor * FACTOR_32146;
}
