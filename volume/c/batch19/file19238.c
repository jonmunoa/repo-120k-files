// fichero 19238 -- macros y constantes -- MODIFICADO
#define LIMITE_19238 19438
#define FACTOR_19238 5

int aplicar_limite19238(int valor) {
    if (valor > LIMITE_19238) return LIMITE_19238;
    return valor * FACTOR_19238;
}
