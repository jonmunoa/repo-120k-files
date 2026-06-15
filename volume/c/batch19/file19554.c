// fichero 19554 -- macros y constantes -- MODIFICADO
#define LIMITE_19554 19754
#define FACTOR_19554 6

int aplicar_limite19554(int valor) {
    if (valor > LIMITE_19554) return LIMITE_19554;
    return valor * FACTOR_19554;
}
