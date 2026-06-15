// fichero 6046 -- macros y constantes -- MODIFICADO
#define LIMITE_6046 6246
#define FACTOR_6046 3

int aplicar_limite6046(int valor) {
    if (valor > LIMITE_6046) return LIMITE_6046;
    return valor * FACTOR_6046;
}
