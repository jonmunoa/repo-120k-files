// fichero 39902 -- macros y constantes -- MODIFICADO
#define LIMITE_39902 40102
#define FACTOR_39902 4

int aplicar_limite39902(int valor) {
    if (valor > LIMITE_39902) return LIMITE_39902;
    return valor * FACTOR_39902;
}
