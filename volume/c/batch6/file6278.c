// fichero 6278 -- macros y constantes -- MODIFICADO
#define LIMITE_6278 6478
#define FACTOR_6278 5

int aplicar_limite6278(int valor) {
    if (valor > LIMITE_6278) return LIMITE_6278;
    return valor * FACTOR_6278;
}
