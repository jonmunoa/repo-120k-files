// fichero 48478 -- macros y constantes
#define LIMITE_48478 48578
#define FACTOR_48478 4

int aplicar_limite48478(int valor) {
    if (valor > LIMITE_48478) return LIMITE_48478;
    return valor * FACTOR_48478;
}
