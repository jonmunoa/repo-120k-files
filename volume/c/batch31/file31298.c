// fichero 31298 -- macros y constantes -- MODIFICADO
#define LIMITE_31298 31498
#define FACTOR_31298 5

int aplicar_limite31298(int valor) {
    if (valor > LIMITE_31298) return LIMITE_31298;
    return valor * FACTOR_31298;
}
