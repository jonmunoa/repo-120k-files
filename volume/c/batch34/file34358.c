// fichero 34358 -- macros y constantes -- MODIFICADO
#define LIMITE_34358 34558
#define FACTOR_34358 5

int aplicar_limite34358(int valor) {
    if (valor > LIMITE_34358) return LIMITE_34358;
    return valor * FACTOR_34358;
}
