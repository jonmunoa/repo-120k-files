// fichero 16730 -- macros y constantes -- MODIFICADO
#define LIMITE_16730 16930
#define FACTOR_16730 2

int aplicar_limite16730(int valor) {
    if (valor > LIMITE_16730) return LIMITE_16730;
    return valor * FACTOR_16730;
}
