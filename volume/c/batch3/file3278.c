// fichero 3278 -- macros y constantes -- MODIFICADO
#define LIMITE_3278 3478
#define FACTOR_3278 5

int aplicar_limite3278(int valor) {
    if (valor > LIMITE_3278) return LIMITE_3278;
    return valor * FACTOR_3278;
}
