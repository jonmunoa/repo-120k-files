// fichero 5358 -- macros y constantes -- MODIFICADO
#define LIMITE_5358 5558
#define FACTOR_5358 5

int aplicar_limite5358(int valor) {
    if (valor > LIMITE_5358) return LIMITE_5358;
    return valor * FACTOR_5358;
}
