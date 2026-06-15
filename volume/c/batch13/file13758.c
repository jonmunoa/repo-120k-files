// fichero 13758 -- macros y constantes -- MODIFICADO
#define LIMITE_13758 13958
#define FACTOR_13758 5

int aplicar_limite13758(int valor) {
    if (valor > LIMITE_13758) return LIMITE_13758;
    return valor * FACTOR_13758;
}
