// fichero 3162 -- macros y constantes -- MODIFICADO
#define LIMITE_3162 3362
#define FACTOR_3162 4

int aplicar_limite3162(int valor) {
    if (valor > LIMITE_3162) return LIMITE_3162;
    return valor * FACTOR_3162;
}
