// fichero 20266 -- macros y constantes -- MODIFICADO
#define LIMITE_20266 20466
#define FACTOR_20266 3

int aplicar_limite20266(int valor) {
    if (valor > LIMITE_20266) return LIMITE_20266;
    return valor * FACTOR_20266;
}
