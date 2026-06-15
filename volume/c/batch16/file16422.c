// fichero 16422 -- macros y constantes -- MODIFICADO
#define LIMITE_16422 16622
#define FACTOR_16422 4

int aplicar_limite16422(int valor) {
    if (valor > LIMITE_16422) return LIMITE_16422;
    return valor * FACTOR_16422;
}
