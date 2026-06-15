// fichero 18358 -- macros y constantes -- MODIFICADO
#define LIMITE_18358 18558
#define FACTOR_18358 5

int aplicar_limite18358(int valor) {
    if (valor > LIMITE_18358) return LIMITE_18358;
    return valor * FACTOR_18358;
}
