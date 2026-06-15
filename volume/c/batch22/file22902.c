// fichero 22902 -- macros y constantes -- MODIFICADO
#define LIMITE_22902 23102
#define FACTOR_22902 4

int aplicar_limite22902(int valor) {
    if (valor > LIMITE_22902) return LIMITE_22902;
    return valor * FACTOR_22902;
}
