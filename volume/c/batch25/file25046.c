// fichero 25046 -- macros y constantes -- MODIFICADO
#define LIMITE_25046 25246
#define FACTOR_25046 3

int aplicar_limite25046(int valor) {
    if (valor > LIMITE_25046) return LIMITE_25046;
    return valor * FACTOR_25046;
}
