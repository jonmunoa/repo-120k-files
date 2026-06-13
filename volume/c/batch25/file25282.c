// fichero 25282 -- macros y constantes
#define LIMITE_25282 25382
#define FACTOR_25282 3

int aplicar_limite25282(int valor) {
    if (valor > LIMITE_25282) return LIMITE_25282;
    return valor * FACTOR_25282;
}
