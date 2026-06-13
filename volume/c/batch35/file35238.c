// fichero 35238 -- macros y constantes
#define LIMITE_35238 35338
#define FACTOR_35238 4

int aplicar_limite35238(int valor) {
    if (valor > LIMITE_35238) return LIMITE_35238;
    return valor * FACTOR_35238;
}
