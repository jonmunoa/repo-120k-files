// fichero 26278 -- macros y constantes -- MODIFICADO
#define LIMITE_26278 26478
#define FACTOR_26278 5

int aplicar_limite26278(int valor) {
    if (valor > LIMITE_26278) return LIMITE_26278;
    return valor * FACTOR_26278;
}
