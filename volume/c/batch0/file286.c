// fichero 286 -- macros y constantes
#define LIMITE_286 386
#define FACTOR_286 2

int aplicar_limite286(int valor) {
    if (valor > LIMITE_286) return LIMITE_286;
    return valor * FACTOR_286;
}
