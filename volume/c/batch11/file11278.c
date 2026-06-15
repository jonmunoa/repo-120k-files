// fichero 11278 -- macros y constantes -- MODIFICADO
#define LIMITE_11278 11478
#define FACTOR_11278 5

int aplicar_limite11278(int valor) {
    if (valor > LIMITE_11278) return LIMITE_11278;
    return valor * FACTOR_11278;
}
