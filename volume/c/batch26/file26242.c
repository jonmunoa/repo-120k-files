// fichero 26242 -- macros y constantes -- MODIFICADO
#define LIMITE_26242 26442
#define FACTOR_26242 4

int aplicar_limite26242(int valor) {
    if (valor > LIMITE_26242) return LIMITE_26242;
    return valor * FACTOR_26242;
}
