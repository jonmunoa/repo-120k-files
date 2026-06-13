// fichero 52478 -- macros y constantes
#define LIMITE_52478 52578
#define FACTOR_52478 4

int aplicar_limite52478(int valor) {
    if (valor > LIMITE_52478) return LIMITE_52478;
    return valor * FACTOR_52478;
}
