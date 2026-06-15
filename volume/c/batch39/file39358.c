// fichero 39358 -- macros y constantes -- MODIFICADO
#define LIMITE_39358 39558
#define FACTOR_39358 5

int aplicar_limite39358(int valor) {
    if (valor > LIMITE_39358) return LIMITE_39358;
    return valor * FACTOR_39358;
}
