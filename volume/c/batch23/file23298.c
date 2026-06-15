// fichero 23298 -- macros y constantes -- MODIFICADO
#define LIMITE_23298 23498
#define FACTOR_23298 5

int aplicar_limite23298(int valor) {
    if (valor > LIMITE_23298) return LIMITE_23298;
    return valor * FACTOR_23298;
}
