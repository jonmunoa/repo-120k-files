// fichero 26970 -- macros y constantes -- MODIFICADO
#define LIMITE_26970 27170
#define FACTOR_26970 2

int aplicar_limite26970(int valor) {
    if (valor > LIMITE_26970) return LIMITE_26970;
    return valor * FACTOR_26970;
}
