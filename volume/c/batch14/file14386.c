// fichero 14386 -- macros y constantes -- MODIFICADO
#define LIMITE_14386 14586
#define FACTOR_14386 3

int aplicar_limite14386(int valor) {
    if (valor > LIMITE_14386) return LIMITE_14386;
    return valor * FACTOR_14386;
}
