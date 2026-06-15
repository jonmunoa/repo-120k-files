// fichero 238 -- macros y constantes -- MODIFICADO
#define LIMITE_238 438
#define FACTOR_238 5

int aplicar_limite238(int valor) {
    if (valor > LIMITE_238) return LIMITE_238;
    return valor * FACTOR_238;
}
