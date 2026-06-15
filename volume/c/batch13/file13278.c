// fichero 13278 -- macros y constantes -- MODIFICADO
#define LIMITE_13278 13478
#define FACTOR_13278 5

int aplicar_limite13278(int valor) {
    if (valor > LIMITE_13278) return LIMITE_13278;
    return valor * FACTOR_13278;
}
