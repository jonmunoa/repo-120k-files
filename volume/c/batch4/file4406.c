// fichero 4406 -- macros y constantes -- MODIFICADO
#define LIMITE_4406 4606
#define FACTOR_4406 3

int aplicar_limite4406(int valor) {
    if (valor > LIMITE_4406) return LIMITE_4406;
    return valor * FACTOR_4406;
}
