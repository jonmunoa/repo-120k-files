// fichero 18902 -- macros y constantes -- MODIFICADO
#define LIMITE_18902 19102
#define FACTOR_18902 4

int aplicar_limite18902(int valor) {
    if (valor > LIMITE_18902) return LIMITE_18902;
    return valor * FACTOR_18902;
}
