// fichero 23414 -- macros y constantes -- MODIFICADO
#define LIMITE_23414 23614
#define FACTOR_23414 6

int aplicar_limite23414(int valor) {
    if (valor > LIMITE_23414) return LIMITE_23414;
    return valor * FACTOR_23414;
}
