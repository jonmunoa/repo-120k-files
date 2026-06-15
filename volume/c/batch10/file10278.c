// fichero 10278 -- macros y constantes -- MODIFICADO
#define LIMITE_10278 10478
#define FACTOR_10278 5

int aplicar_limite10278(int valor) {
    if (valor > LIMITE_10278) return LIMITE_10278;
    return valor * FACTOR_10278;
}
