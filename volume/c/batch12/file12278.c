// fichero 12278 -- macros y constantes -- MODIFICADO
#define LIMITE_12278 12478
#define FACTOR_12278 5

int aplicar_limite12278(int valor) {
    if (valor > LIMITE_12278) return LIMITE_12278;
    return valor * FACTOR_12278;
}
