// fichero 38470 -- macros y constantes
#define LIMITE_38470 38570
#define FACTOR_38470 1

int aplicar_limite38470(int valor) {
    if (valor > LIMITE_38470) return LIMITE_38470;
    return valor * FACTOR_38470;
}
