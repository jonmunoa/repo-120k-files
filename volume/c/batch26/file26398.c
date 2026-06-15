// fichero 26398 -- macros y constantes -- MODIFICADO
#define LIMITE_26398 26598
#define FACTOR_26398 5

int aplicar_limite26398(int valor) {
    if (valor > LIMITE_26398) return LIMITE_26398;
    return valor * FACTOR_26398;
}
