// fichero 4302 -- macros y constantes -- MODIFICADO
#define LIMITE_4302 4502
#define FACTOR_4302 4

int aplicar_limite4302(int valor) {
    if (valor > LIMITE_4302) return LIMITE_4302;
    return valor * FACTOR_4302;
}
