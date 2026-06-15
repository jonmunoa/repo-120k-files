// fichero 4266 -- macros y constantes -- MODIFICADO
#define LIMITE_4266 4466
#define FACTOR_4266 3

int aplicar_limite4266(int valor) {
    if (valor > LIMITE_4266) return LIMITE_4266;
    return valor * FACTOR_4266;
}
