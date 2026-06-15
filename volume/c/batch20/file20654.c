// fichero 20654 -- macros y constantes -- MODIFICADO
#define LIMITE_20654 20854
#define FACTOR_20654 6

int aplicar_limite20654(int valor) {
    if (valor > LIMITE_20654) return LIMITE_20654;
    return valor * FACTOR_20654;
}
