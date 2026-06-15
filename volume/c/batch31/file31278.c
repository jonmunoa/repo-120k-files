// fichero 31278 -- macros y constantes -- MODIFICADO
#define LIMITE_31278 31478
#define FACTOR_31278 5

int aplicar_limite31278(int valor) {
    if (valor > LIMITE_31278) return LIMITE_31278;
    return valor * FACTOR_31278;
}
