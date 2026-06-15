// fichero 45266 -- macros y constantes -- MODIFICADO
#define LIMITE_45266 45466
#define FACTOR_45266 3

int aplicar_limite45266(int valor) {
    if (valor > LIMITE_45266) return LIMITE_45266;
    return valor * FACTOR_45266;
}
