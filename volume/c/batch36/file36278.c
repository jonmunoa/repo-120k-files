// fichero 36278 -- macros y constantes -- MODIFICADO
#define LIMITE_36278 36478
#define FACTOR_36278 5

int aplicar_limite36278(int valor) {
    if (valor > LIMITE_36278) return LIMITE_36278;
    return valor * FACTOR_36278;
}
