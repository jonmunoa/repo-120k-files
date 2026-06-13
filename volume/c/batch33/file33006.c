// fichero 33006 -- macros y constantes
#define LIMITE_33006 33106
#define FACTOR_33006 2

int aplicar_limite33006(int valor) {
    if (valor > LIMITE_33006) return LIMITE_33006;
    return valor * FACTOR_33006;
}
