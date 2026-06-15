// fichero 44278 -- macros y constantes -- MODIFICADO
#define LIMITE_44278 44478
#define FACTOR_44278 5

int aplicar_limite44278(int valor) {
    if (valor > LIMITE_44278) return LIMITE_44278;
    return valor * FACTOR_44278;
}
