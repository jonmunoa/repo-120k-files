// fichero 6266 -- macros y constantes -- MODIFICADO
#define LIMITE_6266 6466
#define FACTOR_6266 3

int aplicar_limite6266(int valor) {
    if (valor > LIMITE_6266) return LIMITE_6266;
    return valor * FACTOR_6266;
}
