// fichero 39278 -- macros y constantes -- MODIFICADO
#define LIMITE_39278 39478
#define FACTOR_39278 5

int aplicar_limite39278(int valor) {
    if (valor > LIMITE_39278) return LIMITE_39278;
    return valor * FACTOR_39278;
}
