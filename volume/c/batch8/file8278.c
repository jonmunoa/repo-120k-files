// fichero 8278 -- macros y constantes -- MODIFICADO
#define LIMITE_8278 8478
#define FACTOR_8278 5

int aplicar_limite8278(int valor) {
    if (valor > LIMITE_8278) return LIMITE_8278;
    return valor * FACTOR_8278;
}
