// fichero 48046 -- macros y constantes -- MODIFICADO
#define LIMITE_48046 48246
#define FACTOR_48046 3

int aplicar_limite48046(int valor) {
    if (valor > LIMITE_48046) return LIMITE_48046;
    return valor * FACTOR_48046;
}
