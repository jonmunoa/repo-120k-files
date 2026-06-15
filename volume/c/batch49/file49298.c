// fichero 49298 -- macros y constantes -- MODIFICADO
#define LIMITE_49298 49498
#define FACTOR_49298 5

int aplicar_limite49298(int valor) {
    if (valor > LIMITE_49298) return LIMITE_49298;
    return valor * FACTOR_49298;
}
