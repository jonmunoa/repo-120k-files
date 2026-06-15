// fichero 38278 -- macros y constantes -- MODIFICADO
#define LIMITE_38278 38478
#define FACTOR_38278 5

int aplicar_limite38278(int valor) {
    if (valor > LIMITE_38278) return LIMITE_38278;
    return valor * FACTOR_38278;
}
