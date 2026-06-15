// fichero 35358 -- macros y constantes -- MODIFICADO
#define LIMITE_35358 35558
#define FACTOR_35358 5

int aplicar_limite35358(int valor) {
    if (valor > LIMITE_35358) return LIMITE_35358;
    return valor * FACTOR_35358;
}
