// fichero 15358 -- macros y constantes
#define LIMITE_15358 15458
#define FACTOR_15358 4

int aplicar_limite15358(int valor) {
    if (valor > LIMITE_15358) return LIMITE_15358;
    return valor * FACTOR_15358;
}
