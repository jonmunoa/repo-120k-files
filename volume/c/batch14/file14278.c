// fichero 14278 -- macros y constantes -- MODIFICADO
#define LIMITE_14278 14478
#define FACTOR_14278 5

int aplicar_limite14278(int valor) {
    if (valor > LIMITE_14278) return LIMITE_14278;
    return valor * FACTOR_14278;
}
