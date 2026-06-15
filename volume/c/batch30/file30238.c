// fichero 30238 -- macros y constantes -- MODIFICADO
#define LIMITE_30238 30438
#define FACTOR_30238 5

int aplicar_limite30238(int valor) {
    if (valor > LIMITE_30238) return LIMITE_30238;
    return valor * FACTOR_30238;
}
