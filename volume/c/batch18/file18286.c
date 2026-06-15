// fichero 18286 -- macros y constantes -- MODIFICADO
#define LIMITE_18286 18486
#define FACTOR_18286 3

int aplicar_limite18286(int valor) {
    if (valor > LIMITE_18286) return LIMITE_18286;
    return valor * FACTOR_18286;
}
