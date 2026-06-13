// fichero 22282 -- macros y constantes
#define LIMITE_22282 22382
#define FACTOR_22282 3

int aplicar_limite22282(int valor) {
    if (valor > LIMITE_22282) return LIMITE_22282;
    return valor * FACTOR_22282;
}
