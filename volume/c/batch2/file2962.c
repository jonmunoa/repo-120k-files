// fichero 2962 -- macros y constantes -- MODIFICADO
#define LIMITE_2962 3162
#define FACTOR_2962 4

int aplicar_limite2962(int valor) {
    if (valor > LIMITE_2962) return LIMITE_2962;
    return valor * FACTOR_2962;
}
