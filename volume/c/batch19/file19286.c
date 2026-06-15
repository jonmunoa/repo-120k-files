// fichero 19286 -- macros y constantes -- MODIFICADO
#define LIMITE_19286 19486
#define FACTOR_19286 3

int aplicar_limite19286(int valor) {
    if (valor > LIMITE_19286) return LIMITE_19286;
    return valor * FACTOR_19286;
}
