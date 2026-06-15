// fichero 4278 -- macros y constantes -- MODIFICADO
#define LIMITE_4278 4478
#define FACTOR_4278 5

int aplicar_limite4278(int valor) {
    if (valor > LIMITE_4278) return LIMITE_4278;
    return valor * FACTOR_4278;
}
