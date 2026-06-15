// fichero 18278 -- macros y constantes -- MODIFICADO
#define LIMITE_18278 18478
#define FACTOR_18278 5

int aplicar_limite18278(int valor) {
    if (valor > LIMITE_18278) return LIMITE_18278;
    return valor * FACTOR_18278;
}
