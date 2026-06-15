// fichero 44266 -- macros y constantes -- MODIFICADO
#define LIMITE_44266 44466
#define FACTOR_44266 3

int aplicar_limite44266(int valor) {
    if (valor > LIMITE_44266) return LIMITE_44266;
    return valor * FACTOR_44266;
}
