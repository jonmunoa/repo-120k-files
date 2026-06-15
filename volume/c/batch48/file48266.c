// fichero 48266 -- macros y constantes -- MODIFICADO
#define LIMITE_48266 48466
#define FACTOR_48266 3

int aplicar_limite48266(int valor) {
    if (valor > LIMITE_48266) return LIMITE_48266;
    return valor * FACTOR_48266;
}
