// fichero 11750 -- macros y constantes -- MODIFICADO
#define LIMITE_11750 11950
#define FACTOR_11750 2

int aplicar_limite11750(int valor) {
    if (valor > LIMITE_11750) return LIMITE_11750;
    return valor * FACTOR_11750;
}
