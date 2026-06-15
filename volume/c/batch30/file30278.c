// fichero 30278 -- macros y constantes -- MODIFICADO
#define LIMITE_30278 30478
#define FACTOR_30278 5

int aplicar_limite30278(int valor) {
    if (valor > LIMITE_30278) return LIMITE_30278;
    return valor * FACTOR_30278;
}
