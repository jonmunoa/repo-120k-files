// fichero 14238 -- macros y constantes -- MODIFICADO
#define LIMITE_14238 14438
#define FACTOR_14238 5

int aplicar_limite14238(int valor) {
    if (valor > LIMITE_14238) return LIMITE_14238;
    return valor * FACTOR_14238;
}
