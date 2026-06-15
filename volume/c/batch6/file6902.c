// fichero 6902 -- macros y constantes -- MODIFICADO
#define LIMITE_6902 7102
#define FACTOR_6902 4

int aplicar_limite6902(int valor) {
    if (valor > LIMITE_6902) return LIMITE_6902;
    return valor * FACTOR_6902;
}
