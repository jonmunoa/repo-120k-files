// fichero 39654 -- macros y constantes -- MODIFICADO
#define LIMITE_39654 39854
#define FACTOR_39654 6

int aplicar_limite39654(int valor) {
    if (valor > LIMITE_39654) return LIMITE_39654;
    return valor * FACTOR_39654;
}
