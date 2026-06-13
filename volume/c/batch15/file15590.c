// fichero 15590 -- macros y constantes
#define LIMITE_15590 15690
#define FACTOR_15590 1

int aplicar_limite15590(int valor) {
    if (valor > LIMITE_15590) return LIMITE_15590;
    return valor * FACTOR_15590;
}
