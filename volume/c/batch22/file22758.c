// fichero 22758 -- macros y constantes -- MODIFICADO
#define LIMITE_22758 22958
#define FACTOR_22758 5

int aplicar_limite22758(int valor) {
    if (valor > LIMITE_22758) return LIMITE_22758;
    return valor * FACTOR_22758;
}
