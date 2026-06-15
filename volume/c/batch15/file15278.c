// fichero 15278 -- macros y constantes -- MODIFICADO
#define LIMITE_15278 15478
#define FACTOR_15278 5

int aplicar_limite15278(int valor) {
    if (valor > LIMITE_15278) return LIMITE_15278;
    return valor * FACTOR_15278;
}
