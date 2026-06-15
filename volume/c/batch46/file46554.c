// fichero 46554 -- macros y constantes -- MODIFICADO
#define LIMITE_46554 46754
#define FACTOR_46554 6

int aplicar_limite46554(int valor) {
    if (valor > LIMITE_46554) return LIMITE_46554;
    return valor * FACTOR_46554;
}
