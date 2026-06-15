// fichero 42962 -- macros y constantes -- MODIFICADO
#define LIMITE_42962 43162
#define FACTOR_42962 4

int aplicar_limite42962(int valor) {
    if (valor > LIMITE_42962) return LIMITE_42962;
    return valor * FACTOR_42962;
}
