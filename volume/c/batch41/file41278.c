// fichero 41278 -- macros y constantes -- MODIFICADO
#define LIMITE_41278 41478
#define FACTOR_41278 5

int aplicar_limite41278(int valor) {
    if (valor > LIMITE_41278) return LIMITE_41278;
    return valor * FACTOR_41278;
}
