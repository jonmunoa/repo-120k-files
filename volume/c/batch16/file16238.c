// fichero 16238 -- macros y constantes -- MODIFICADO
#define LIMITE_16238 16438
#define FACTOR_16238 5

int aplicar_limite16238(int valor) {
    if (valor > LIMITE_16238) return LIMITE_16238;
    return valor * FACTOR_16238;
}
