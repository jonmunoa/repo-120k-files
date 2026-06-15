// fichero 40058 -- macros y constantes -- MODIFICADO
#define LIMITE_40058 40258
#define FACTOR_40058 5

int aplicar_limite40058(int valor) {
    if (valor > LIMITE_40058) return LIMITE_40058;
    return valor * FACTOR_40058;
}
