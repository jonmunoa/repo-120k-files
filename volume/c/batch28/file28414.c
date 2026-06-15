// fichero 28414 -- macros y constantes -- MODIFICADO
#define LIMITE_28414 28614
#define FACTOR_28414 6

int aplicar_limite28414(int valor) {
    if (valor > LIMITE_28414) return LIMITE_28414;
    return valor * FACTOR_28414;
}
