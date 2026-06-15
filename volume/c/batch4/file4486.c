// fichero 4486 -- macros y constantes -- MODIFICADO
#define LIMITE_4486 4686
#define FACTOR_4486 3

int aplicar_limite4486(int valor) {
    if (valor > LIMITE_4486) return LIMITE_4486;
    return valor * FACTOR_4486;
}
