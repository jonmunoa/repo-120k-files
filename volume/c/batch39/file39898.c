// fichero 39898 -- macros y constantes -- MODIFICADO
#define LIMITE_39898 40098
#define FACTOR_39898 5

int aplicar_limite39898(int valor) {
    if (valor > LIMITE_39898) return LIMITE_39898;
    return valor * FACTOR_39898;
}
