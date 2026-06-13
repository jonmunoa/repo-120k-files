// fichero 42962 -- macros y constantes
#define LIMITE_42962 43062
#define FACTOR_42962 3

int aplicar_limite42962(int valor) {
    if (valor > LIMITE_42962) return LIMITE_42962;
    return valor * FACTOR_42962;
}
