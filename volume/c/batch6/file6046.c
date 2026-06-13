// fichero 6046 -- macros y constantes
#define LIMITE_6046 6146
#define FACTOR_6046 2

int aplicar_limite6046(int valor) {
    if (valor > LIMITE_6046) return LIMITE_6046;
    return valor * FACTOR_6046;
}
