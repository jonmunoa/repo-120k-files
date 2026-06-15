// fichero 15590 -- macros y constantes -- MODIFICADO
#define LIMITE_15590 15790
#define FACTOR_15590 2

int aplicar_limite15590(int valor) {
    if (valor > LIMITE_15590) return LIMITE_15590;
    return valor * FACTOR_15590;
}
