// fichero 35238 -- macros y constantes -- MODIFICADO
#define LIMITE_35238 35438
#define FACTOR_35238 5

int aplicar_limite35238(int valor) {
    if (valor > LIMITE_35238) return LIMITE_35238;
    return valor * FACTOR_35238;
}
