// fichero 17346 -- macros y constantes -- MODIFICADO
#define LIMITE_17346 17546
#define FACTOR_17346 3

int aplicar_limite17346(int valor) {
    if (valor > LIMITE_17346) return LIMITE_17346;
    return valor * FACTOR_17346;
}
