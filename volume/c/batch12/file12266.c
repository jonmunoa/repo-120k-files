// fichero 12266 -- macros y constantes -- MODIFICADO
#define LIMITE_12266 12466
#define FACTOR_12266 3

int aplicar_limite12266(int valor) {
    if (valor > LIMITE_12266) return LIMITE_12266;
    return valor * FACTOR_12266;
}
