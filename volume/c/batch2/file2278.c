// fichero 2278 -- macros y constantes -- MODIFICADO
#define LIMITE_2278 2478
#define FACTOR_2278 5

int aplicar_limite2278(int valor) {
    if (valor > LIMITE_2278) return LIMITE_2278;
    return valor * FACTOR_2278;
}
