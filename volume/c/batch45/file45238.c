// fichero 45238 -- macros y constantes -- MODIFICADO
#define LIMITE_45238 45438
#define FACTOR_45238 5

int aplicar_limite45238(int valor) {
    if (valor > LIMITE_45238) return LIMITE_45238;
    return valor * FACTOR_45238;
}
