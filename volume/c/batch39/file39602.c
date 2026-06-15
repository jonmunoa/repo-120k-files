// fichero 39602 -- macros y constantes -- MODIFICADO
#define LIMITE_39602 39802
#define FACTOR_39602 4

int aplicar_limite39602(int valor) {
    if (valor > LIMITE_39602) return LIMITE_39602;
    return valor * FACTOR_39602;
}
