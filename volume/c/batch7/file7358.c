// fichero 7358 -- macros y constantes -- MODIFICADO
#define LIMITE_7358 7558
#define FACTOR_7358 5

int aplicar_limite7358(int valor) {
    if (valor > LIMITE_7358) return LIMITE_7358;
    return valor * FACTOR_7358;
}
