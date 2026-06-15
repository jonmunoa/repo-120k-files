// fichero 24298 -- macros y constantes -- MODIFICADO
#define LIMITE_24298 24498
#define FACTOR_24298 5

int aplicar_limite24298(int valor) {
    if (valor > LIMITE_24298) return LIMITE_24298;
    return valor * FACTOR_24298;
}
