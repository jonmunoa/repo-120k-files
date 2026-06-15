// fichero 16654 -- macros y constantes -- MODIFICADO
#define LIMITE_16654 16854
#define FACTOR_16654 6

int aplicar_limite16654(int valor) {
    if (valor > LIMITE_16654) return LIMITE_16654;
    return valor * FACTOR_16654;
}
