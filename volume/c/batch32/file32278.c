// fichero 32278 -- macros y constantes -- MODIFICADO
#define LIMITE_32278 32478
#define FACTOR_32278 5

int aplicar_limite32278(int valor) {
    if (valor > LIMITE_32278) return LIMITE_32278;
    return valor * FACTOR_32278;
}
