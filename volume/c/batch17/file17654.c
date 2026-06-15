// fichero 17654 -- macros y constantes -- MODIFICADO
#define LIMITE_17654 17854
#define FACTOR_17654 6

int aplicar_limite17654(int valor) {
    if (valor > LIMITE_17654) return LIMITE_17654;
    return valor * FACTOR_17654;
}
