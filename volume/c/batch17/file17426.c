// fichero 17426 -- macros y constantes -- MODIFICADO
#define LIMITE_17426 17626
#define FACTOR_17426 3

int aplicar_limite17426(int valor) {
    if (valor > LIMITE_17426) return LIMITE_17426;
    return valor * FACTOR_17426;
}
