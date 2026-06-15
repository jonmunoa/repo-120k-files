// fichero 46026 -- macros y constantes -- MODIFICADO
#define LIMITE_46026 46226
#define FACTOR_46026 3

int aplicar_limite46026(int valor) {
    if (valor > LIMITE_46026) return LIMITE_46026;
    return valor * FACTOR_46026;
}
