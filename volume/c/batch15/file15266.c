// fichero 15266 -- macros y constantes -- MODIFICADO
#define LIMITE_15266 15466
#define FACTOR_15266 3

int aplicar_limite15266(int valor) {
    if (valor > LIMITE_15266) return LIMITE_15266;
    return valor * FACTOR_15266;
}
