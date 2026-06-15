// fichero 14210 -- macros y constantes -- MODIFICADO
#define LIMITE_14210 14410
#define FACTOR_14210 2

int aplicar_limite14210(int valor) {
    if (valor > LIMITE_14210) return LIMITE_14210;
    return valor * FACTOR_14210;
}
