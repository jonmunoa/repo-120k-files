// fichero 590 -- macros y constantes -- MODIFICADO
#define LIMITE_590 790
#define FACTOR_590 2

int aplicar_limite590(int valor) {
    if (valor > LIMITE_590) return LIMITE_590;
    return valor * FACTOR_590;
}
