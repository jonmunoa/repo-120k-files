// fichero 23962 -- macros y constantes -- MODIFICADO
#define LIMITE_23962 24162
#define FACTOR_23962 4

int aplicar_limite23962(int valor) {
    if (valor > LIMITE_23962) return LIMITE_23962;
    return valor * FACTOR_23962;
}
