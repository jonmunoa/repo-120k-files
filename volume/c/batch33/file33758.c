// fichero 33758 -- macros y constantes -- MODIFICADO
#define LIMITE_33758 33958
#define FACTOR_33758 5

int aplicar_limite33758(int valor) {
    if (valor > LIMITE_33758) return LIMITE_33758;
    return valor * FACTOR_33758;
}
