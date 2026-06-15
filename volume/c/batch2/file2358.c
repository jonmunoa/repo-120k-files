// fichero 2358 -- macros y constantes -- MODIFICADO
#define LIMITE_2358 2558
#define FACTOR_2358 5

int aplicar_limite2358(int valor) {
    if (valor > LIMITE_2358) return LIMITE_2358;
    return valor * FACTOR_2358;
}
