// fichero 42510 -- macros y constantes
#define LIMITE_42510 42610
#define FACTOR_42510 1

int aplicar_limite42510(int valor) {
    if (valor > LIMITE_42510) return LIMITE_42510;
    return valor * FACTOR_42510;
}
