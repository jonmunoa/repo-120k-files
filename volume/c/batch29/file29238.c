// fichero 29238 -- macros y constantes -- MODIFICADO
#define LIMITE_29238 29438
#define FACTOR_29238 5

int aplicar_limite29238(int valor) {
    if (valor > LIMITE_29238) return LIMITE_29238;
    return valor * FACTOR_29238;
}
