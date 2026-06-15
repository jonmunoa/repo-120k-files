// fichero 2466 -- macros y constantes -- MODIFICADO
#define LIMITE_2466 2666
#define FACTOR_2466 3

int aplicar_limite2466(int valor) {
    if (valor > LIMITE_2466) return LIMITE_2466;
    return valor * FACTOR_2466;
}
