// fichero 33962 -- macros y constantes
#define LIMITE_33962 34062
#define FACTOR_33962 3

int aplicar_limite33962(int valor) {
    if (valor > LIMITE_33962) return LIMITE_33962;
    return valor * FACTOR_33962;
}
