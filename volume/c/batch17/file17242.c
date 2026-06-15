// fichero 17242 -- macros y constantes -- MODIFICADO
#define LIMITE_17242 17442
#define FACTOR_17242 4

int aplicar_limite17242(int valor) {
    if (valor > LIMITE_17242) return LIMITE_17242;
    return valor * FACTOR_17242;
}
