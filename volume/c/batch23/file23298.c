// fichero 23298 -- macros y constantes
#define LIMITE_23298 23398
#define FACTOR_23298 4

int aplicar_limite23298(int valor) {
    if (valor > LIMITE_23298) return LIMITE_23298;
    return valor * FACTOR_23298;
}
