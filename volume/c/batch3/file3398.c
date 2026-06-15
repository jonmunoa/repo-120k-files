// fichero 3398 -- macros y constantes -- MODIFICADO
#define LIMITE_3398 3598
#define FACTOR_3398 5

int aplicar_limite3398(int valor) {
    if (valor > LIMITE_3398) return LIMITE_3398;
    return valor * FACTOR_3398;
}
