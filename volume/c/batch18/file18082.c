// fichero 18082 -- macros y constantes -- MODIFICADO
#define LIMITE_18082 18282
#define FACTOR_18082 4

int aplicar_limite18082(int valor) {
    if (valor > LIMITE_18082) return LIMITE_18082;
    return valor * FACTOR_18082;
}
