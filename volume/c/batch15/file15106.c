// fichero 15106 -- macros y constantes -- MODIFICADO
#define LIMITE_15106 15306
#define FACTOR_15106 3

int aplicar_limite15106(int valor) {
    if (valor > LIMITE_15106) return LIMITE_15106;
    return valor * FACTOR_15106;
}
