// fichero 17450 -- macros y constantes -- MODIFICADO
#define LIMITE_17450 17650
#define FACTOR_17450 2

int aplicar_limite17450(int valor) {
    if (valor > LIMITE_17450) return LIMITE_17450;
    return valor * FACTOR_17450;
}
