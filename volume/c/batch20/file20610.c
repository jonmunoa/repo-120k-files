// fichero 20610 -- macros y constantes
#define LIMITE_20610 20710
#define FACTOR_20610 1

int aplicar_limite20610(int valor) {
    if (valor > LIMITE_20610) return LIMITE_20610;
    return valor * FACTOR_20610;
}
