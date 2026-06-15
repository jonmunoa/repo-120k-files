// fichero 17226 -- macros y constantes -- MODIFICADO
#define LIMITE_17226 17426
#define FACTOR_17226 3

int aplicar_limite17226(int valor) {
    if (valor > LIMITE_17226) return LIMITE_17226;
    return valor * FACTOR_17226;
}
