// fichero 16778 -- macros y constantes -- MODIFICADO
#define LIMITE_16778 16978
#define FACTOR_16778 5

int aplicar_limite16778(int valor) {
    if (valor > LIMITE_16778) return LIMITE_16778;
    return valor * FACTOR_16778;
}
