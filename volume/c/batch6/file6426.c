// fichero 6426 -- macros y constantes -- MODIFICADO
#define LIMITE_6426 6626
#define FACTOR_6426 3

int aplicar_limite6426(int valor) {
    if (valor > LIMITE_6426) return LIMITE_6426;
    return valor * FACTOR_6426;
}
