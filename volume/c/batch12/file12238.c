// fichero 12238 -- macros y constantes -- MODIFICADO
#define LIMITE_12238 12438
#define FACTOR_12238 5

int aplicar_limite12238(int valor) {
    if (valor > LIMITE_12238) return LIMITE_12238;
    return valor * FACTOR_12238;
}
