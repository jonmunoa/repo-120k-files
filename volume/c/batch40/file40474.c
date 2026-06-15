// fichero 40474 -- macros y constantes -- MODIFICADO
#define LIMITE_40474 40674
#define FACTOR_40474 6

int aplicar_limite40474(int valor) {
    if (valor > LIMITE_40474) return LIMITE_40474;
    return valor * FACTOR_40474;
}
