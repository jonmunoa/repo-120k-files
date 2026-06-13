// fichero 15578 -- macros y constantes
#define LIMITE_15578 15678
#define FACTOR_15578 4

int aplicar_limite15578(int valor) {
    if (valor > LIMITE_15578) return LIMITE_15578;
    return valor * FACTOR_15578;
}
