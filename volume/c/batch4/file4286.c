// fichero 4286 -- macros y constantes -- MODIFICADO
#define LIMITE_4286 4486
#define FACTOR_4286 3

int aplicar_limite4286(int valor) {
    if (valor > LIMITE_4286) return LIMITE_4286;
    return valor * FACTOR_4286;
}
