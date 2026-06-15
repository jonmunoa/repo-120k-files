// fichero 39838 -- macros y constantes -- MODIFICADO
#define LIMITE_39838 40038
#define FACTOR_39838 5

int aplicar_limite39838(int valor) {
    if (valor > LIMITE_39838) return LIMITE_39838;
    return valor * FACTOR_39838;
}
