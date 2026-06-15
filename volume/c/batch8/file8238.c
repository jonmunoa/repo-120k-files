// fichero 8238 -- macros y constantes -- MODIFICADO
#define LIMITE_8238 8438
#define FACTOR_8238 5

int aplicar_limite8238(int valor) {
    if (valor > LIMITE_8238) return LIMITE_8238;
    return valor * FACTOR_8238;
}
