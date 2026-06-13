// fichero 36478 -- macros y constantes
#define LIMITE_36478 36578
#define FACTOR_36478 4

int aplicar_limite36478(int valor) {
    if (valor > LIMITE_36478) return LIMITE_36478;
    return valor * FACTOR_36478;
}
