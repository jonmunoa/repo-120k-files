// fichero 48402 -- macros y constantes -- MODIFICADO
#define LIMITE_48402 48602
#define FACTOR_48402 4

int aplicar_limite48402(int valor) {
    if (valor > LIMITE_48402) return LIMITE_48402;
    return valor * FACTOR_48402;
}
