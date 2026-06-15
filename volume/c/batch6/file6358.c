// fichero 6358 -- macros y constantes -- MODIFICADO
#define LIMITE_6358 6558
#define FACTOR_6358 5

int aplicar_limite6358(int valor) {
    if (valor > LIMITE_6358) return LIMITE_6358;
    return valor * FACTOR_6358;
}
