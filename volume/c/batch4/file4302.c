// fichero 4302 -- macros y constantes
#define LIMITE_4302 4402
#define FACTOR_4302 3

int aplicar_limite4302(int valor) {
    if (valor > LIMITE_4302) return LIMITE_4302;
    return valor * FACTOR_4302;
}
